class Solution:
    def reverseParentheses(self, s: str) -> str:
        st = []
        curr = ""
        for ch in s:
            if ch == '(':
                st.append(curr)
                curr = ""
            elif ch == ')':
                curr = curr[::-1]
                curr = st.pop() + curr
            else:
                curr += ch 
        return curr

        