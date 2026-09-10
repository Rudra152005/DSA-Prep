class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        res = []
        n = len(nums)
        for i in range(len(nums)):
            if nums.count(nums[i]) == 1:
                res.append(nums[i])
        return res

        