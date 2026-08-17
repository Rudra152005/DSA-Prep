class Solution:
    def canConstruct(self, ran: str, mag: str) -> bool:
        mp = {}
        for i in range(len(mag)):
            mp[mag[i]] = mp.get(mag[i], 0) + 1
        for ch in ran:
            mp[ch] = mp.get(ch, 0) - 1
            if mp[ch] < 0:
                return False
        return True

        