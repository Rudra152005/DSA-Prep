class Solution {
public:
    int fun(int i,int j,int m,int n,vector<vector<int>> &dp){
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int right=fun(i,j+1,m,n,dp);
        int down=fun(i+1,j,m,n,dp);
        return dp[i][j]= right+down;
    }
    int tabulation(int m,int n){
         vector<int> prev(n,1);
        for(int i=0;i<m;i++){
            vector<int> curr(n);
            for(int j=0;j<n;j++){
                if(i==0 || j==0) curr[j]=1;
                else{
                    curr[j]=prev[j]+curr[j-1];
                }
            }
            prev=curr;
        }
        return prev[n-1];
    }
    int uniquePaths(int m, int n) {
        // vector<vector<int>> dp(m,vector<int>(n,-1));
        // return fun(0,0,m,n,dp);
        return tabulation(m,n);
    }
};