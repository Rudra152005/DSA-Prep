class Solution:
    def isHappy(self, n: int) -> bool:
        seen = set()
        while n != 1:
            if n in seen:
                return False
            seen.add(n)
            res = 0

            while n > 0:
                a = n % 10
                res += a * a
                n //= 10
            n = res
        return True
            
        