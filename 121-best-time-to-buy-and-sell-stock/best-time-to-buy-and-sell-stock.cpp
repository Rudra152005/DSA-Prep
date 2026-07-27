class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = prices[0];
        int profit = 0;
        for(int num : prices){
            if(min > num){
                min = num;
            }
            profit = max(profit, num - min);
        }
        return profit;
    }
};