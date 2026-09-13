class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        g.sort()
        s.sort()
        i = 0
        l = 0
        cnt = 0
        while i < len(g) and l < len(s):
            if g[i] <= s[l]:
                cnt += 1
                l += 1
                i += 1
            else:
                l += 1
        return cnt

        