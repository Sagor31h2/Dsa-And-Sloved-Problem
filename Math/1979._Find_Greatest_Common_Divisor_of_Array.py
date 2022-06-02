class Solution:
    def findGCD(self, nums: List[int]) -> int:
        a = min(nums)
        b = max(nums)
        return self.gcd(a, b)

    def gcd(self, a, b):
        while b:
            a, b = b, a % b
        return a
