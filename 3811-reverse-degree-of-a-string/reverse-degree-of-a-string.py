class Solution:
    def reverseDegree(self, s: str) -> int:
        sum = 0 
        for i, ch in enumerate(s, start=1):
            value = 26 - (ord(ch) - ord('a'))
            sum += i * value
        return sum
        