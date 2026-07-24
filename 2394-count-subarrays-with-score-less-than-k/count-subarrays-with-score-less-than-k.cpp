class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long ans = 0, sum = 0;
        int left = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            sum += nums[i];
            while(left <= i && sum * (i - left + 1LL) >= k){
                sum -= nums[left];
                left++;
            }
            ans += i - left + 1;
        }
        return ans;

    }
};