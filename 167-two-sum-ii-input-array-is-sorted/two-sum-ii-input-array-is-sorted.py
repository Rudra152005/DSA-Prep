class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        mp = {}
        for i in range(len(numbers)):
            comple = target - numbers[i]
            if comple in mp:
                return [mp[comple] + 1, i + 1]
            mp[numbers[i]] = i
