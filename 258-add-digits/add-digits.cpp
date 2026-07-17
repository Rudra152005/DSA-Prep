class Solution {
public:
    int sumdigit(int n){
        if(n == 0) return 0;
        return n % 10 + sumdigit(n / 10);
    }
    int addDigits(int num) {
        if(num < 10) return num;
        return addDigits(sumdigit(num));
    }
};