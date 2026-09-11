class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        l = 0
        sum = 0
        ans = float('inf')
        for i in range(len(nums)):
            sum += nums[i]
            while sum >= target:
                ans = min(ans, i - l + 1)
                sum -= nums[l]
                l += 1
                # ans = min(ans, i - l + 1)
        if ans == float('inf'):
            return 0
        else:
            return ans
        