class Solution:
    def merge(self, inter: List[List[int]]) -> List[List[int]]:
        inter.sort()
        ans = []
        for s, e in inter:
            if not ans or s > ans[-1][1]:
                ans.append([s, e])
            else:
                ans[-1][1] = max(ans[-1][1], e)
        return ans

        