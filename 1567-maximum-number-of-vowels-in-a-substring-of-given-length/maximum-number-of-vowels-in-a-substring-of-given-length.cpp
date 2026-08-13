class Solution {
public:
    bool checkv(char s){
        if(s == 'a' || s== 'e' || s== 'i' || s== 'o' || s== 'u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int cnt = 0;
        for(int i=0; i<k; i++){
            if(checkv(s[i])){
                cnt++;
            }
        }
        int maxcount = cnt;
        for(int i=k; i<s.length(); i++){
            if(checkv(s[i-k])){
                cnt--;
            }
            if(checkv(s[i])){
                cnt++;
            }
            maxcount = max(maxcount, cnt);
        }
        return maxcount;
    }
};