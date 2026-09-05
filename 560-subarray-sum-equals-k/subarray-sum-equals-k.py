class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        sum = 0
        cnt = 0 
        mp = {0 : 1}
        for i in range(len(nums)):
            sum += nums[i]
            need = sum - k
            if need in mp:
                cnt += mp[need]
            mp[sum] = mp.get(sum, 0) + 1
        return cnt
        