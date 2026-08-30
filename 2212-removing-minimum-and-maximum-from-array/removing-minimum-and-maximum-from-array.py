class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        n = len(nums)
        mn = nums.index(min(nums))
        mx = nums.index(max(nums))
        left = min(mn, mx)
        right = max(mn, mx)
        case1 = right + 1
        case2 = n - left
        case3 = (left + 1) + (n - right)
        return min(case1, case2, case3)