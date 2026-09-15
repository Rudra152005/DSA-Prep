class Solution:
    def findLHS(self, nums: List[int]) -> int:
        mp = {}
        for num in nums:
            mp[num] = mp.get(num, 0) + 1
        maxm = 0
        for num in mp:
            if num + 1 in mp:
                maxm = max(maxm, mp[num] + mp[num + 1])
        return maxm
        