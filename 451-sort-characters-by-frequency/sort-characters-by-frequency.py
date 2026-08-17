class Solution:
    def frequencySort(self, s: str) -> str:
        cnt = Counter(s)
        ans = sorted(cnt, key=lambda x: (-cnt[x], x))
        res = ""
        for x in ans:
            res += x * cnt[x]
        return res