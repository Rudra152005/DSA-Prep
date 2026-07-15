class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intrv) {
        sort(intrv.begin(), intrv.end());
        vector<vector<int>> ans;
        ans.push_back(intrv[0]);
        for(int i = 1; i<intrv.size(); i++){
            if(intrv[i][0] <= ans.back()[1]){
                ans.back()[1] = max(ans.back()[1], intrv[i][1]);
            }
            else{
                ans.push_back(intrv[i]);
            }
        }
        return ans;
    }
};