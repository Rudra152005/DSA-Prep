class Solution:
    def maxProduct(self, nums: list[int]) -> int:
        maxpr = nums[0]
        minpr = nums[0]
        ans = nums[0]
        for i in range(1, len(nums)):
            if nums[i] < 0:
                maxpr, minpr = minpr, maxpr
            maxpr = max(nums[i], nums[i] * maxpr)
            minpr = min(nums[i], nums[i] * minpr)
            ans = max(ans, maxpr)
        return ans
        