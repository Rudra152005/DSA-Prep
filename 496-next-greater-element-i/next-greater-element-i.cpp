class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int, int> mp;
        stack<int> st;
        for(int i=0; i<n; i++){
            while(!st.empty() && nums2[st.top()] < nums2[i]){
                mp[nums2[st.top()]] = nums2[i]; 
                st.pop();
                
            }
            st.push(i);
        }
        while(!st.empty()){
            mp[nums2[st.top()]] = -1;
            st.pop();
        }
        vector<int> res;
        for(int n : nums1){
            res.push_back(mp[n]);
        }
        return res;
    }
};