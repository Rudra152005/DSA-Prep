class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN;
        long long secnd = LLONG_MIN;
        long long thr = LLONG_MIN;
        for(int num : nums){
            if(num == first || num == secnd || num == thr){
                continue;
            }
            if(num > first){
                thr = secnd;
                secnd = first;
                first = num;
            }
            else if(num > secnd){
                thr = secnd;
                secnd = num;
            }
            else if(num > thr){
                thr = num;
            }
        }
        return (thr == LLONG_MIN) ? first : thr; 
    }
};