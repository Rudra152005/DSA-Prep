class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;
       for(int i=0; i< 2*n; i++){
            int id = i %n;
            while(!st.empty() && nums[id] > nums[st.top()]){
                int prev = st.top();
                st.pop();
                ans[prev] = nums[id];

            } 
            if(i < n){
                st.push(i);
            }
       }
       return ans;
        
    }
};