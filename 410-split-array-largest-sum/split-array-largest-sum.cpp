class Solution {
public:
    bool cansplit(vector<int>& nums, int k, int maxsum){
        int subarr = 1;
        int currsum = 0;
        for(int num : nums){
            if(currsum + num <= maxsum){
                currsum += num;
            }
            else{
                subarr++;
                currsum = num;
            }
        }
        return subarr <= k;
    }
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(), nums.end());
        int r = accumulate(nums.begin(), nums.end(), 0);
        int ans = r;
        while(l <= r){
            int mid = l + (r - l)/2;
            if(cansplit(nums, k, mid)){
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