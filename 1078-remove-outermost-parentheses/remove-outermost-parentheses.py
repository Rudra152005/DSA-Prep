class Solution:
    def removeOuterParentheses(self, s: str) -> str:
        ans = []
        dept = 0 
        for ch in s:
            if ch == '(':
                if dept > 0:
                    ans.append(ch)
                dept += 1
            else:
                dept -= 1
                if dept > 0:
                    ans.append(ch)
        return ''.join(ans)
        