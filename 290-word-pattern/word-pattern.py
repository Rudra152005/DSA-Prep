class Solution:
    def wordPattern(self, pat: str, s: str) -> bool:
        word = s.split()
        if len(pat) != len(word):
            return False
        mp1 = {}
        mp2 = {}
        for a, b in zip(pat, word):
            if a in mp1 and mp1[a] != b:
                return False
            if b in mp2 and mp2[b] != a:
                return False
            mp1[a] = b
            mp2[b] = a
        return True
        