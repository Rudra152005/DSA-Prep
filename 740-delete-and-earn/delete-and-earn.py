class Solution:
    def deleteAndEarn(self, nums: list[int]) -> int:
        maxnum = max(nums)
        points = [0] * (maxnum + 1)
        for num in nums:
            points[num] += num
        dp = [0] * (maxnum + 1)
        dp[0] = 0
        dp[1] = points[1]
        for i in range(2, maxnum + 1):
            dp[i] = max(dp[i - 1], dp[i - 2] + points[i])
        return dp[maxnum]

        
        