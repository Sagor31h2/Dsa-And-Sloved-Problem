class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        temp = x
        rev = 0
        last = 0
        print(rev)
        while temp > 0:
            last = temp % 10
            rev = (rev*10)+last
            temp = temp//10

        if rev == x:
            return True
        else:
            return False


f = Solution()
print(f.isPalindrome(121))
