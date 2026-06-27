class Solution {
public:
    bool isvowel(char ch){
        ch = tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            return true;
        }
        return false;
    }
    string reverseVowels(string s) {
        int l = 0;
        int r = s.length() - 1;
        while(l < r){
            while(l < r && !isvowel(s[l])){
                l++;
            }
            while(l < r && !isvowel(s[r])){
                r--;
            }
            swap(s[l], s[r]);
            l++;
            r--;
        }
        return s;
    }
};