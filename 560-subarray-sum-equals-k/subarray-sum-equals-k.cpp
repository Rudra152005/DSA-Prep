class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int sum = 0;
        int cnt = 0;
        mp[0] = 1;
        for(int num : nums){
            sum += num;
            if(mp.count(sum - k)){
                cnt += mp[sum - k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};