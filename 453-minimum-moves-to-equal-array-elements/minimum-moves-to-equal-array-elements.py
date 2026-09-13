class Solution:
    def minMoves(self, nums: List[int]) -> int:
        ans = 0
        n = len(nums)
        ans = sum(nums) - min(nums) * n
        return ans
        