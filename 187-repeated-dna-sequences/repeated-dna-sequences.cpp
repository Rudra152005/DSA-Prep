class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_set<string> seen;
        unordered_set<string> rep;
        for(int i=0; i + 9<s.size(); i++){
            string curr = s.substr(i, 10);
            if(seen.count(curr)){
                rep.insert(curr);
            }
            else{
                seen.insert(curr);
            }

        }
        return vector<string> (rep.begin(), rep.end());
    }
};