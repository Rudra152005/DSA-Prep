class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int r = accumulate(nums.begin(), nums.end(), 0);
        int ans = r;
        while(l <= r){
            int mid = l + (r - l) /2;
            int curr = 0;
            int subarr = 1;
            for(int num : nums){
                if(curr + num > mid){
                    subarr++;
                    curr = num;
                }
                else{
                    curr += num;
                }
            }
            if(subarr <= k){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans;
    }
};