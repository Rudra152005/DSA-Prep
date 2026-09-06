from collections import Counter

class Solution:
    def minWindow(self, s: str, t: str) -> str:
        if not s or not t or len(s) < len(t):
            return ""

        ans = ""
        need = Counter(t)
        wind = {}

        req = len(need)
        form = 0

        left = 0
        min_len = float('inf')

        for i in range(len(s)):
            ch = s[i]
            wind[ch] = wind.get(ch, 0) + 1

            if ch in need and wind[ch] == need[ch]:
                form += 1

            while form == req:

                if i - left + 1 < min_len:
                    ans = s[left:i + 1]
                    min_len = i - left + 1

                left_ch = s[left]

                wind[left_ch] -= 1
                if left_ch in need and wind[left_ch] < need[left_ch]:
                    form -= 1

                left += 1

        return ans