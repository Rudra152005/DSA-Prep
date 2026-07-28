class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {

        vector<int> ans;

        if (s.empty() || words.empty())
            return ans;

        unordered_map<string, int> need;

        for (string word : words)
            need[word]++;

        int minlen = words[0].size();
        int total = words.size();

        for (int i = 0; i < minlen; i++) {

            unordered_map<string, int> wind;

            int left = i;
            int cnt = 0;

            for (int r = i; r + minlen <= s.size(); r += minlen) {

                string word = s.substr(r, minlen);

                
                if (!need.count(word)) {
                    wind.clear();
                    cnt = 0;
                    left = r + minlen;
                    continue;
                }

                wind[word]++;
                cnt++;

                
                while (wind[word] > need[word]) {
                    string leftWord = s.substr(left, minlen);
                    wind[leftWord]--;
                    cnt--;
                    left += minlen;
                }

                
                if (cnt == total) {
                    ans.push_back(left);

                    string leftWord = s.substr(left, minlen);
                    wind[leftWord]--;
                    cnt--;
                    left += minlen;
                }
            }
        }

        return ans;
    }
};