class Solution:
    def canConstruct(self, ran: str, mag: str) -> bool:
        return not Counter(ran) - Counter(mag)