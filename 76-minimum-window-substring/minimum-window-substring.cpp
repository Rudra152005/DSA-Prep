class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int> need;
        unordered_map<char, int> wind;
        for(char c : t){
            need[c]++;
        }
        int req = need.size();
        int form = 0;
        int minlen = INT_MAX;
        int left = 0;
        int start = 0;
        for(int i=0; i<s.size(); i++){
            char c = s[i];
            wind[c]++;
            if(need.count(c) && wind[c] == need[c]) form++;
            while(left <= i && form == req){
                if(i-left+1 < minlen){
                    minlen = i - left + 1;
                    start = left;
                }
                char ch = s[left];
                wind[ch]--;
                if(need.count(ch) && wind[ch] < need[ch]) form--;
                left++;
            }
        }
        if(minlen == INT_MAX) return "";
        return s.substr(start, minlen);
    }
};