class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void solve(vector<int>& nums, int i){
        ans.push_back(temp);
        for(int j = i ; j<nums.size(); j++){
            if(j > i && nums[j] == nums[j - 1]){
                continue;
            }
            temp.push_back(nums[j]);
            solve(nums, j + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        solve(nums, 0);
        return ans;
    }
};