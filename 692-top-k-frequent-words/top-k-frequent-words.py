class Solution:
    def topKFrequent(self, words: List[str], k: int) -> List[str]:
        cnt = Counter(words)
        ans = sorted(cnt, key = lambda x : (-cnt[x], x))
        return ans[:k]
        