class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min = prices[0];
        int profit = 0;
        for(int price : prices){
            if(price < min){
                min = price;
            }
            profit = max(profit, price - min);
        }

        return profit;
        
    }
};