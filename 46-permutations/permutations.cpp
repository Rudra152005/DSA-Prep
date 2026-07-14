class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int>& nums, vector<int>& path, vector<bool>& used){
        if(path.size() == nums.size()){
            ans.push_back(path);
            return;
        }
        for(int i=0; i<nums.size(); i++){
            if(used[i]){
                continue;
            }
            used[i] = true;
            path.push_back(nums[i]);
            backtrack(nums, path, used);
            path.pop_back();
            used[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> path;
        vector<bool> used(n, false);
        backtrack(nums, path, used);
        return ans;
    }
};