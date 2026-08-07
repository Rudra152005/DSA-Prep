class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && nums2[st.top()] < nums2[i]){
                ans[st.top()] = nums2[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int> res;
        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<n; j++){
                if(nums1[i] == nums2[j]){
                    res.push_back(ans[j]);
                }
            }
        }
        return res;

    }
};