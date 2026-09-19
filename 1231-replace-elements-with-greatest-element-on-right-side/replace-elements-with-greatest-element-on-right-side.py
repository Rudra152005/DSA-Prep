class Solution:
    def replaceElements(self, nums: list[int]) -> list[int]:
        maxele = -1

        for i in range(len(nums) - 1, -1, -1):
            current = nums[i]
            nums[i] = maxele
            maxele = max(maxele, current)

        return nums