class Solution {
public:
    unordered_map<int, bool> memo;

    bool dfs(int mask, int target, int maxNum) {
        if (memo.count(mask))
            return memo[mask];

        for (int i = 1; i <= maxNum; i++) {

            // Number already used
            if (mask & (1 << (i - 1)))
                continue;

            // Current player wins immediately
            if (i >= target)
                return memo[mask] = true;

            // Opponent loses
            if (!dfs(mask | (1 << (i - 1)), target - i, maxNum))
                return memo[mask] = true;
        }

        return memo[mask] = false;
    }

    bool canIWin(int maxChoosableInteger, int desiredTotal) {

        if (desiredTotal <= 0)
            return true;

        int total = (maxChoosableInteger * (maxChoosableInteger + 1)) / 2;

        if (total < desiredTotal)
            return false;

        memo.clear();

        return dfs(0, desiredTotal, maxChoosableInteger);
    }
};