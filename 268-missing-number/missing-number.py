class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        target = 0
        nums.sort()
        for i in range(len(nums)):
            if nums[i] == target:
                target += 1
        return target