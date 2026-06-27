class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int x : nums1){
            ans.push_back(x);
        }
        for(int x : nums2){
            ans.push_back(x);
        }
        sort(ans.begin(), ans.end());
        int sz = ans.size();
        if(sz % 2 == 0){
            return (ans[sz/2] + ans[sz/2 - 1 ] )/ 2.0;
        }
        return ans[sz/2];
    }
};