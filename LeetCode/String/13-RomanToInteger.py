class Solution:
    def romanToInt(self, s: str) -> int:

        l = len(s)-1
        sum = 0
        Store = {"I": 1, "V": 5, "X": 10,
                 "L": 50, "C": 100, "D": 500, "M": 1000}
        for i in range(0, l):
            if(Store[s[i]] < Store[s[i+1]]):
                sum -= Store[s[i]]
            else:
                sum += Store[s[i]]
        sum = sum+Store[s[l]]
        return sum


f = Solution()
print(f.romanToInt("MCMXCIV"))
