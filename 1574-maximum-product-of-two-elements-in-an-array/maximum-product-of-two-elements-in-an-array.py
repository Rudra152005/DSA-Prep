class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        nums.sort()
        n = len(nums)
        res = (nums[-1] - 1) * (nums[-2] - 1)
        return res 
        