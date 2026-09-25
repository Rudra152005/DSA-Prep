class Solution:
    def findDuplicates(self, nums: list[int]) -> list[int]:
        mp = {}
        res = []
        for num in nums:
            mp[num] = mp.get(num, 0) + 1
        for a, b in mp.items():
            if b > 1:
                res.append(a)
        return res
        