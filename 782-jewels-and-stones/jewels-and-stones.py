class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        s = set(jewels)
        cnt = 0
        for ch in stones:
            if ch in s:
                cnt += 1
        return cnt
