class Solution {
public:
    int fun(vector<int> &nums,int i, vector<int> &dp){
        if(i>=nums.size()) return 0;
        if(dp[i] != -1) return dp[i];
        int pick=nums[i]+fun(nums,i+2, dp);
        int skip=fun(nums,i+1, dp);
        return dp[i] = max(pick,skip);
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() + 1, -1);
        return max(fun(nums,0, dp),fun(nums,1, dp));
    }
};