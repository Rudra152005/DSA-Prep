class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int leftsum = 0;
        int n = nums.size();
        vector<int> ans(n);
        for(int i=0; i<nums.size(); i++){
            int rightsum = total - leftsum - nums[i];
            ans[i] = abs(rightsum - leftsum);
            leftsum += nums[i];
        }
        return ans;

    }
};