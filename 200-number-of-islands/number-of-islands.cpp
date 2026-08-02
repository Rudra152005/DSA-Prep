class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int island = 0;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        for(int i=0; i< row; i++){
            for(int j=0; j<col; j++){
                if(grid[i][j] == '1'){
                    island++;
                    queue<pair<int, int>> q;
                    q.push({i, j});
                    grid[i][j] = '0';
                    while(!q.empty()){
                        int r = q.front().first;
                        int c = q.front().second;
                        q.pop();
                        for(int i=0; i<4; i++){
                            int nr = r + dr[i];
                            int nc = c + dc[i];
                            if(nr >= 0 && nc >= 0 && nr < row && nc < col && grid[nr][nc] == '1'){
                                grid[nr][nc] = '0';
                                q.push({nr, nc});
                            }
                        }
                    }
                }
            }
        }
         return island;


    }
};