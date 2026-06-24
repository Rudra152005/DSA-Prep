class Solution {
public:
    int secondHighest(string s) {
        int first = -1;
        int second = -1;
        for(char ch : s){
            if(isdigit(ch)){
                int digit = ch - '0';
                if(digit > first){
                    second = first;
                    first = digit;
                }
                else if(digit < first && digit > second){
                    second = digit;
                }
            }
        }
        return second;
    }
};