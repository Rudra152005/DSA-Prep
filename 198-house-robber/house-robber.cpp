class Solution {
public:
    int funct(vector<int> &nums, int i, vector<int> &dp){
        if(i >= nums.size()) return 0;
        if(dp[i] != -1) return dp[i];
        int pick = nums[i] + funct(nums, i + 2, dp);
        int skip = funct(nums, i + 1, dp);
        return dp[i] = max(pick, skip);
        
    }
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return max(funct(nums, 0, dp), funct(nums, 1, dp));
    }
};