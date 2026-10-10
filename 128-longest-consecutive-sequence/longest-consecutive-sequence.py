class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        s = set(nums)
        longest = 0
        for num in s:
            curr = num
            if curr - 1 not in s:
                while curr + 1 in s:
                    curr += 1
                longest = max(longest, curr - num + 1)
        return longest

        