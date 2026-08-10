class Solution {
public:

    int solve(vector<int>& piles, vector<vector<int>>& dp, int i, int j) {

        if (i == j)
            return piles[i];

        if (dp[i][j] != -1)
            return dp[i][j];

        int left = piles[i] - solve(piles, dp, i + 1, j);

        int right = piles[j] - solve(piles, dp, i, j - 1);

        return dp[i][j] = max(left, right);
    }

    bool stoneGame(vector<int>& piles) {

        int n = piles.size();

        vector<vector<int>> dp(n, vector<int>(n, -1));

        return solve(piles, dp, 0, n - 1) > 0;
    }
};