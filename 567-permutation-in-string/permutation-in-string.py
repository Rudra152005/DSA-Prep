class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        if len(s1) > len(s2):
            return False

        mp = {}

        for i in range(len(s1)):
            mp[s1[i]] = mp.get(s1[i], 0) + 1

        wind = {}
        l = 0

        for i in range(len(s2)):
            wind[s2[i]] = wind.get(s2[i], 0) + 1

            if i - l + 1 > len(s1):
                wind[s2[l]] -= 1

                if wind[s2[l]] == 0:
                    del wind[s2[l]]

                l += 1

            if wind == mp:
                return True

        return False