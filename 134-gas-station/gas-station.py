class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        if sum(gas) < sum(cost):
            return -1
        res = []
        for i in range(len(gas)):
            res.append(gas[i] - cost[i])
        tank = 0
        st = 0
        for i in range(len(res)):
            tank += res[i]
            if tank < 0:
                st = i + 1
                tank = 0
        return st
        