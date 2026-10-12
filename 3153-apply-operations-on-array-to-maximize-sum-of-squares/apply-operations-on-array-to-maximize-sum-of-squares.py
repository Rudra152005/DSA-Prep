
class Solution:
    def maxSum(self, nums: list[int], k: int) -> int:
        MOD = 10**9 + 7
        count = [0] * 30

        for num in nums:
            for bit in range(30):
                if num & (1 << bit):
                    count[bit] += 1

        ans = 0
        for _ in range(k):
            num = 0
            for bit in range(30):
                if count[bit] > 0:
                    num |= (1 << bit)
                    count[bit] -= 1
            ans = (ans + num * num) % MOD
        return ans
