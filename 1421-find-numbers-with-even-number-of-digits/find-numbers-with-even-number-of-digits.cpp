class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int evencount = 0;
        for(int i=0; i<n; i++){
            int cnt = 0;
            while(nums[i] != 0){
                cnt++;
                nums[i] /= 10;
            }
            if(cnt % 2 == 0) evencount++;
        }
        return evencount;
    }
};