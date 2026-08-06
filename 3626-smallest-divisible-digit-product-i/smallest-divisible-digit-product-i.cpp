class Solution {
public:
    int product(int n){
        int num = 1;
        while(n != 0){
            num *= n % 10;
            n /= 10;
        }
        return num;
    }
    int smallestNumber(int n, int t) {
        // int res = 1;
        if(n % 10 == 0 ) return n;
        while(1){
            if(product(n) % t != 0){
                n += 1;
            }
            else {
                return n;
            }
        }
        return -1;
        
        
    }
};