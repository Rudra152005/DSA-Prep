class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int sum = 0;
        for(auto &row : nums){
            sort(row.begin(), row.end());
        }
        int row = nums.size();
        int col = nums[0].size();
        for(int j=0; j<col; j++){
            int maxi = 0;
            for(int i=0; i<row; i++){
                maxi = max(maxi, nums[i][j]);
            }
            sum += maxi;
        }

        return sum;
        
    }
};