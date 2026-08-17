class Solution:
    def firstUniqChar(self, s: str) -> int:
        mp = {}
        for i in range(len(s)):
            mp[s[i]] = mp.get(s[i], 0) + 1
        for i in range(len(s)):
            if mp[s[i]] == 1:
                return i
        return -1
        