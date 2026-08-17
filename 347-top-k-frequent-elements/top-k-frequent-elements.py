class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        num = Counter(nums)
        ans = []
        for x, freq in num.most_common(k):
            ans.append(x)
        return ans
        