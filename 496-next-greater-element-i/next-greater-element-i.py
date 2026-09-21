class Solution:
    def nextGreaterElement(self, nums1: list[int], nums2: list[int]) -> list[int]:
        st = []
        mp = {}
        for num in nums2:
            while st and num > st[-1]:
                smaller = st.pop()
                mp[smaller] = num
            st.append(num)
        ans = []
        for num in nums1:
            ans.append(mp.get(num, -1))
        return ans