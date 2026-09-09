class Solution:
    def maxSubarrayLength(self, nums: List[int], k: int) -> int:
        cnt = 0
        mp = {}
        l = 0
        for i in range(len(nums)):
            mp[nums[i]] = mp.get(nums[i], 0) + 1
            while mp[nums[i]] > k:
                mp[nums[l]] -= 1
                if mp[nums[l]] == 0:
                    del mp[nums[l]]
                l += 1
            cnt = max(cnt, i - l + 1)
        return cnt

        