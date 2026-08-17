class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        ans = list(Counter(nums).most_common(k))
        res = []
        for x, y in ans:
            res.append(x)
        return res

        