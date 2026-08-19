class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        l = 0
        zero = 0
        ans = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                zero += 1
            while zero > k:
                if nums[l] == 0:
                    zero -= 1
                l += 1
            ans = max(ans, i - l +1)
        return ans