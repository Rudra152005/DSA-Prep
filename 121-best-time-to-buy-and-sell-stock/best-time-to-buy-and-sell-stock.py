class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy = prices[0]
        profit = 0
        for pr in prices:
            buy = min(buy, pr)
            profit = max(profit, pr - buy)
        return profit