class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftmx(n), rightmx(n);
        leftmx[0] = height[0];
        for(int i=1; i<n; i++){
            leftmx[i] = max(leftmx[i-1], height[i]);
        }
        rightmx[n - 1] = height[n - 1];
        for(int i = n - 2; i>= 0 ; i--){
            rightmx[i] = max(rightmx[i + 1], height[i]);
        }
        int wat = 0;
        for(int i=0; i<n; i++){
            wat += min(leftmx[i], rightmx[i]) - height[i];
        }
        return wat;
    }
};