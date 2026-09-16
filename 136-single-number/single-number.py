class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        mp = {}
        for num in nums:
            mp[num] = mp.get(num, 0) + 1
        for a, b in mp.items():
            if b == 1:
                return a