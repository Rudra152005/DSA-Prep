class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        maxlen = [0] * len(nums)
        minlen = [0] * len(nums)
        maxlen[0] = nums[0]
        for i in range(1, len(nums)):
            maxlen[i] = max(maxlen[i - 1], nums[i])
        n = len(nums)
        minlen[n - 1] = nums[n - 1]
        for i in range(len(nums) - 2, -1, -1):
            minlen[i] = min(minlen[i + 1], nums[i])
        for i in range(n):
            if maxlen[i] - minlen[i] <= k:
                return i
        return -1

        