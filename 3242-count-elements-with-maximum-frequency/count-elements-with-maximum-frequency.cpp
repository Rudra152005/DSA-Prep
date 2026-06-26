class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        int maxi = 0;
        for(int num : nums){
            mp[num]++;
        }
        for(auto it : mp){
            maxi = max(maxi, it.second);
        }
        int sum = 0;
        for(auto it : mp){
            if(maxi == it.second){
                sum += maxi;
            }
        }
        return sum;
        
    }
};