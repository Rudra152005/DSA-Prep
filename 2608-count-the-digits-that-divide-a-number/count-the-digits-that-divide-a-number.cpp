class Solution {
public:
    int fun(int org, int curr){
        if(curr == 0) return 0;
        int digit = curr % 10;
        if(digit != 0 && org % digit == 0){
            return 1 + fun(org, curr/10);
        }
        return fun(org, curr/ 10);
    }
    int countDigits(int num) {
        return fun(num, num);
    }
};