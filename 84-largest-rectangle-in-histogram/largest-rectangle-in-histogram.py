class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        heights.append(0)

        st = []
        maxarea = 0
        for i in range(len(heights)):
            while st and heights[st[-1]] >= heights[i]:
                h = heights[st.pop()]
                if not st:
                    width = i
                else:
                    width = i - st[-1] - 1
                maxarea = max(maxarea, h * width)
            st.append(i)
        return maxarea