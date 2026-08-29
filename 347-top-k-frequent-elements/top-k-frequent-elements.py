class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        ans = list(Counter(nums).most_common(k))
        res = []
        for a, b in ans:
            res.append(a)
        return res
        