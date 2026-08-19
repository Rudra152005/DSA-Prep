class Solution:
    def totalFruit(self, fru: List[int]) -> int:
        mp = {}
        l = 0
        ans = 0
        for i in range(len(fru)):
            mp[fru[i]] = mp.get(fru[i], 0) + 1
            while len(mp) > 2:
                mp[fru[l]] -= 1
                if mp[fru[l]] == 0:
                    del mp[fru[l]]
                l += 1
            ans = max(ans, i - l + 1)
        return ans
        