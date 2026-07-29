class Solution {
public:
    int fibbo(int n, vector<int> &dp){
        if(n == 0 || n == 1) return n;
        if(dp[n] == -1) return dp[n];
        dp[0] = 0;
        dp[1] = 1;
        dp[n] = fibbo(n - 2, dp) + fibbo(n - 1, dp);
        return dp[n];
    }

    int fib(int n) {
        vector<int> dp(n  + 1);
        return fibbo(n, dp);
    }
};