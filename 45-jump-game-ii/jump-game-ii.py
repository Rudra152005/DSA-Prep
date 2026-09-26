class Solution:
    def jump(self, nums: list[int]) -> int:
        cnt = 0
        end = 0
        maxjump = 0 
        n = len(nums)
        for i in range(n - 1):
            maxjump = max(maxjump, i + nums[i])
            if i == end:
                cnt += 1
                end = maxjump
        return cnt
        

        