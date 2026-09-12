from bisect import bisect_right

class Solution:
    def maximumWeight(self, intervals):

        arr = []

        
        for i in range(len(intervals)):
            start, end, weight = intervals[i]
            arr.append([start, end, weight, i])

        
        arr.sort()

        n = len(arr)

        starts = []

        for interval in arr:
            starts.append(interval[0])

        dp = [[None] * 5 for _ in range(n)]

        def solve(i, k):

            if i == n:
                return (0, [])

    
            if k == 0:
                return (0, [])

            if dp[i][k] is not None:
                return dp[i][k]

            skip_score, skip_list = solve(i + 1, k)

            start, end, weight, index = arr[i]
            next_i = bisect_right(starts, end)

            take_score, take_list = solve(next_i, k - 1)

            take_score += weight
            take_list = [index] + take_list

            take_list.sort()


            if take_score > skip_score:

                answer = (take_score, take_list)

            elif take_score < skip_score:

                answer = (skip_score, skip_list)

            else:

                if take_list < skip_list:
                    answer = (take_score, take_list)
                else:
                    answer = (skip_score, skip_list)

            dp[i][k] = answer

            return answer

        return solve(0, 4)[1]