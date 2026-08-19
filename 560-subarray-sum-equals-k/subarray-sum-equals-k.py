class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        
        mp = {0 : 1}
        cnt = 0
        sum = 0
        for i in range(len(nums)):
            sum += nums[i]
            if sum - k in mp:
                cnt += mp[sum - k]
            mp[sum] = mp.get(sum, 0) + 1
        return cnt
        