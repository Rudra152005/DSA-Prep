class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        mp = {0: -1}
        ans = 0
        cnt = 0
        for i in range(len(nums)):
            if nums[i] == 0:
                cnt -= 1
            else:
                cnt += 1
            if cnt in mp:
                ans = max(ans, i - mp[cnt])
            else:
                mp[cnt] = i
        return ans
        