class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n * 2);
        for(int i=0; i< temp.size(); i++){
            temp[i] = nums[i % n];
        }
        return temp;
    }
};