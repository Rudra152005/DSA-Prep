class Solution {
public:
    int fibnoc(int n, vector<int>& dp){
        if(n == 0 ||n == 1) return n;
        if(dp[n] == -1) return dp[n];
        dp[0] = 1;
        dp[1] = 1;
        return dp[n] = fibnoc(n - 1, dp) + fibnoc(n - 2, dp);
    }
    int fib(int n) {
        vector<int> dp(n + 1);
        return fibnoc(n, dp);
    }
};