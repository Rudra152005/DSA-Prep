
class Solution:
    def findContentChildren(self, g: list[int], s: list[int]) -> int:
        g.sort()
        s.sort()
        l = 0 
        r = 0  
        while l < len(s) and r < len(g):
            if g[r] <= s[l]:
                r += 1
            l += 1

        return r
