class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n - 1;
        int wat = 0;
        int lm = 0, rm = 0;
        while(l<= r){
            if(height[l] < height[r]){
                if(height[l] >= lm){
                    lm = height[l];
                }
                else{
                    wat += lm - height[l];
                }
                l++;
            }
            else{
                if(height[r] >= rm ){
                    rm = height[r];
                }
                else{
                    wat += rm - height[r];
                }
                r--;
            }
        }
        return wat;
    }
};