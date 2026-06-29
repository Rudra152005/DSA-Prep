class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int maxarea = 0;
        stack<int> st;
        int width = 0;
        for(int i=0; i<=n; i++){
            while(!st.empty() && (i == n || heights[i] <= heights[st.top()])){
                int height = heights[st.top()];
                st.pop();
                if(st.empty()){
                    width = i;
                }
                else{
                    width = i - st.top() - 1;
                }
                maxarea = max(maxarea, height * width);
            }
            st.push(i);
        }
        return maxarea;
    }
};