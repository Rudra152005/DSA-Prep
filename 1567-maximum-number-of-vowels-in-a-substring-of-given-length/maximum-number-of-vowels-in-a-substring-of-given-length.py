class Solution:
    def checkvo(self, s):
        if s == 'a' or s == 'e'  or s == 'i' or s == 'o' or s == 'u':
            return True
        return False

    def maxVowels(self, s: str, k: int) -> int:
        cnt = 0
        for i in range(k):
            if self.checkvo(s[i]):
                cnt += 1
        maxcnt = cnt
        for i in range(k, len(s)):
            if self.checkvo(s[i - k]):
                cnt -= 1
            if self.checkvo(s[i]):
                cnt += 1
            maxcnt = max(maxcnt, cnt)
        return maxcnt
            


        