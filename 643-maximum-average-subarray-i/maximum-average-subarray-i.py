class Solution:
    def findMaxAverage(self, nums: List[int], k: int) -> float:
        sum = 0
        for i in range(k):
            sum += nums[i]
        maxsum = sum 
        for i in range(k, len(nums)):
            sum += nums[i] - nums[i - k]
            maxsum = max(maxsum, sum)
        return maxsum / k
        