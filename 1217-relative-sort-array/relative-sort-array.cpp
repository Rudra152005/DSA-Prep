class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> mp;
        for(int num : arr1){
            mp[num]++;
        }
        vector<int> ans;
        for(int num : arr2){
            while(mp[num] > 0){
                ans.push_back(num);
                mp[num]--;
            }
        }
        for(int i=0; i<=1000; i++){
            while(mp[i] > 0){
                ans.push_back(i);
                mp[i]--;
            }
            
        }
        return ans;
    }
};