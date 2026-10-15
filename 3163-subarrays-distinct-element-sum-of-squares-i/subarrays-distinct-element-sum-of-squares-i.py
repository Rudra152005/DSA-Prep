class Solution:
    def sumCounts(self, nums: List[int]) -> int:
        n = len(nums)
        ans = 0 
        for i in range(n):
            s = set()
            for j in range(i, n):
                s.add(nums[j])
                cnt = len(s)
                ans += cnt * cnt
        return ans
        