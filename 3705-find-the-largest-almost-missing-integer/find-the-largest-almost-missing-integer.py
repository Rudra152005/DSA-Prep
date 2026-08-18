class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        n = len(nums)
        mp = {}
        for x in nums:
            mp[x] = mp.get(x, 0) + 1
        if k == n:
            return max(nums)
        if k == 1:
            ans = -1
            for x, freq in mp.items():
                if freq == 1:
                    ans = max(ans, x)
            return ans
        ans = -1
        if mp[nums[0]] == 1:
            ans = max(ans, nums[0])
        if mp[nums[-1]] == 1:
            ans = max(ans, nums[-1])
        return ans
        