class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        s = set(nums)
        count = 0
        for CurrenNumber in nums:
            print(CurrenNumber)
            if CurrenNumber-1 not in s:
                longest = 1
                while CurrenNumber+1 in s:
                    longest += 1
                    CurrenNumber += 1
                count = max(longest, count)
        return count
