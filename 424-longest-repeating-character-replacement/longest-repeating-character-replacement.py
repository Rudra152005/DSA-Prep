class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        mp = {}
        ans = 0
        freq = 0
        l = 0
        for i in range(len(s)):
            mp[s[i]] = mp.get(s[i], 0) + 1
            freq = max(freq, mp[s[i]])
            if (i - l + 1) - freq > k:
                mp[s[l]] -= 1
                l += 1
            ans = max(ans, i - l + 1)
        return ans

        