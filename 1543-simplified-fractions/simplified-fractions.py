class Solution:
    def gcd(self, a, b):
        while b:
            a, b = b, a % b
        return a
    def simplifiedFractions(self, n: int) -> list[str]:
        ans = []
        for dem in range(2, n + 1):
            for num in range(1, dem):
                if self.gcd(num, dem) == 1:
                    ans.append(str(num)+"/"+str(dem))
        return ans
        