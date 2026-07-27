class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.size() < p.size()) return ans;
        unordered_map<char, int> mp, wind;
        for(char c : p){
            mp[c]++;
        }
        int k = p.size();
        for(int i=0; i<k; i++){
            wind[s[i]]++;
        }
        if(wind == mp) ans.push_back(0);

        for(int i=k; i<s.size(); i++){
            wind[s[i]]++;
            wind[s[i-k]]--;
            if(wind[s[i-k]] == 0) wind.erase(s[i-k]);
            if(wind == mp) ans.push_back(i-k + 1);
        }
        return ans;
    }
};