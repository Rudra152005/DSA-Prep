class Solution:
    def maximumWealth(self, acc: List[List[int]]) -> int:
        maxm = 0
        for i in range(len(acc)):
            total = 0
            for j in range(len(acc[i])):
                total += acc[i][j]
                maxm = max(maxm, total)
        return maxm


        