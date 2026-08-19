class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        st = set()
        ans = 0
        l = 0
        for i in range(len(s)):
            while s[i] in st:
                st.remove(s[l])
                l += 1
            st.add(s[i])
            ans = max(ans, i - l + 1)
        return ans
        