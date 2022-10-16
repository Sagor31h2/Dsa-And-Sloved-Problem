class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:

        h1 = collections.Counter(s1)

        ln = len(s1)

        for i in range(len(s2)-ln+1):
            h2 = collections.Counter(s2[i:i+ln])
            if h1 == h2:
                return True
        return False
