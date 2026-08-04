class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        int width = 0;
        int maxarea = 0;
        stack<int> st;
        for(int i=0; i<=n; i++){
            while(!st.empty() && (i == n || heights[st.top()] >= heights[i])){
                int h = heights[st.top()];
                st.pop();
                if(st.empty()){
                    width = i;
                }
                else{
                    width = i - st.top() - 1;
                }
                maxarea = max(maxarea, h * width);
            }
            st.push(i);
        }
        return maxarea;
    }
};