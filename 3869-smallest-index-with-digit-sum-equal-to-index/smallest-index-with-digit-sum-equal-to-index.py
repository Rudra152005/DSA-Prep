class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        n = len(nums)
        for i in range(n):
            digitsum = 0
            while nums[i] > 0:
                digitsum += nums[i] % 10
                nums[i] //= 10
            if digitsum == i:
                return i
        return -1
        