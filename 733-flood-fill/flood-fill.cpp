class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int color) {
        int row = img.size();
        int col = img[0].size();
        int old = img[sr][sc];
        if(old == color) return img;
        queue<pair<int, int>> q;
        q.push({sr, sc});
        img[sr][sc] = color;
        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i = 0; i< 4; i++){
                int nr = r  + dr[i];
                int nc = c + dc[i];
                if(nr >= 0 && nr <row && nc >= 0 && nc < col && img[nr][nc] == old){
                    img[nr][nc] =color;
                    q.push({nr, nc});
                }
            }
        }
        return img;
    }
};