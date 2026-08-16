class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if len(t) < len(s):
            return False
        cnt = 0
        for i in range(len(t)):
            if cnt == len(s):
                return True
            if t[i] == s[cnt]:
                cnt += 1
        return cnt == len(s)