class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        n = len(nums)
        maxlen = [0] * n
        minlen = [0] * n
        maxlen[0] = nums[0]
        for i in range(len(nums)):
            maxlen[i] = max(maxlen[i - 1], nums[i])
        minlen[n - 1] = nums[n -1]
        for i in range(n-2, -1, -1):
            minlen[i] = min(minlen[i + 1], nums[i])
        for i in range(len(maxlen)):
            if maxlen[i] - minlen[i] <= k:
                return i
        return -1 
