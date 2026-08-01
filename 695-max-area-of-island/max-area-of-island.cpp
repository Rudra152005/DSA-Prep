class Solution {
public:
    int dfs(vector<vector<int>>& grid, int r, int c){
        if(r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == 0) return 0;
        grid[r][c] = 0;
        return 1 + dfs(grid, r + 1, c) + dfs(grid, r - 1, c) + dfs(grid, r, c+1) + dfs(grid, r, c-1);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int maxarea = 0;
        for(int i=0; i<row; i++){
            for(int j =0; j<col; j++){
                if(grid[i][j] == 1){
                    int area = dfs(grid, i, j);
                    maxarea = max(maxarea, area);
                }
            }
        }
        return maxarea;
    }
};