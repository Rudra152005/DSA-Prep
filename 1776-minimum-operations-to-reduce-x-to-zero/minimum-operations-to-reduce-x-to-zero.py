class Solution:
    def minOperations(self, nums: list[int], x: int) -> int:

        total = sum(nums)

        if x > total:
            return -1

        remaining = total - x

        if remaining == 0:
            return len(nums)

        su = 0
        l = 0
        ans = -1

        for i in range(len(nums)):

            su += nums[i]

            while su > remaining:
                su -= nums[l]
                l += 1

            if su == remaining:
                ans = max(ans, i - l + 1)

        return -1 if ans == -1 else len(nums) - ans