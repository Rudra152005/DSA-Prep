class Solution {
public:
    int largestrec(vector<int> &nums){
        int n = nums.size();
        stack<int> st;
        int maxarea = 0;
        for(int i=0; i<=n; i++){
            while(!st.empty() && (i == n || nums[st.top()] >= nums[i])){
                int h = nums[st.top()];
                st.pop();
                int width = 0;
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
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> height(cols, 0);
        int ans = 0;
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(matrix[i][j] == '1'){
                    height[j]++;
                }
                else{
                    height[j] = 0;
                }
            }
            ans = max(ans, largestrec(height));
        }
        return ans;
    }
};