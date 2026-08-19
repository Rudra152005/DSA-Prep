class Solution:
    def checkvov(self, s: str) -> bool:
        if s == 'a' or s == 'e' or s == 'i' or s == 'o' or s == 'u':
            return True
        return False 
    def maxVowels(self, s: str, k: int) -> int:
        cnt = 0
        for i in range(k):
            if self.checkvov(s[i]):
                cnt += 1
        maxcnt = cnt
        for i in range(k, len(s)):
            if self.checkvov(s[i - k]):
                cnt -= 1
            if self.checkvov(s[i]):
                cnt += 1
            maxcnt = max(maxcnt, cnt)
        return maxcnt
