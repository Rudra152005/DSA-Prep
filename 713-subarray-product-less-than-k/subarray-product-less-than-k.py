class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        if k <= 1:
            return 0
        cnt = 0
        sub = 1
        l = 0
        for i in range(len(nums)):
            sub *= nums[i]
            while sub >= k:
                sub //= nums[l]
                l += 1
            cnt += i - l + 1
        return cnt
        