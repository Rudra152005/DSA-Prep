class Solution:
    def plusOne(self, digits: list[int]) -> list[int]:
        res = ""
        for num in digits:
            res += str(num)
        nums = int(res) + 1
        ans = []
        while nums > 0:
            ans.append(nums % 10)
            nums //= 10
        return list(reversed(ans))

        