class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        freq = {}
        maxele = 0
        maxfreq = 0
        for i in range(len(nums)):
            freq[nums[i]] = freq.get(nums[i], 0) + 1
        for a, b in freq.items():
            if b > maxfreq:
                maxfreq = b
                maxele = a
        return maxele

        