class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smal = *min_element(nums.begin(), nums.end());
        int larg = *max_element(nums.begin(), nums.end());
        return gcd(smal, larg);
    }
};