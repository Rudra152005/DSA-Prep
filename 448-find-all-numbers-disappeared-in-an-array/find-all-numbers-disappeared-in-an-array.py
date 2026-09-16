class Solution:
    def findDisappearedNumbers(self, nums: list[int]) -> list[int]:
        res = []
        st = set(nums)
        for i in range(1, len(nums) + 1):
            if i not in st:
                res.append(i)
        return res        