class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        st = set(nums)
        maxcnt = 0
        for num in st:
            if num - 1 not in st:
                cnt = 1
                while num + cnt in st:
                    cnt += 1
                maxcnt = max(maxcnt, cnt)
        return maxcnt

        