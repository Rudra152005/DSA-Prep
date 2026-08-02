class Solution {
public:
    void dfs(vector<vector<int>> &img, int r, int c, int old, int newc){
        int row = img.size();
        int col = img[0].size();
        if(r < 0 || c < 0 || r >= row || c >= col)return;
        if(img[r][c] != old) return;
        img[r][c] = newc;

        dfs(img, r + 1, c, old, newc);
        dfs(img, r - 1, c, old, newc);
        dfs(img, r, c + 1, old, newc);
        dfs(img, r, c-1, old, newc);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int color) {
        int oldclo = img[sr][sc];
        if(oldclo == color) return img;
        dfs(img, sr, sc, oldclo, color);
        return img;

    }
};