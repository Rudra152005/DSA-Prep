class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int num : nums){
            mp[num]++;
        }
        int maxfreq = 0;
        int maxele = 0;
        for(auto it : mp){
            if(it.second > maxfreq){
                maxfreq = it.second;
                maxele = it.first;
            }
        }
        return maxele;
    }
};