class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int end = 0;
        int jump = 0;
        int maxm = 0;
        if(n == 1){
            return 0;
        }
        for(int i=0; i<n - 1; i++){
            maxm = max(maxm, i + nums[i]);
            if( i == end){
                jump++;
                end = maxm;
            }
        }
        return jump;
    }
};