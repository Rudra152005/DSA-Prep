class Solution {
public:
    bool isvowel(char ch){
            ch = tolower(ch);
            return ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u';
        }
    int vowelStrings(vector<string>& words, int left, int right) {
        int count = 0;
        for(int i=left ; i <= right; i++){
            if(isvowel(words[i].front()) && isvowel(words[i].back())){
                count++;
            }
        }
        return count;
        
    }
};