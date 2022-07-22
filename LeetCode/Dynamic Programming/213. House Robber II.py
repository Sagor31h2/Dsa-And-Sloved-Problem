class Solution:
    def rob(self, nums: List[int]) -> int:

        def Srob(nums):
            cur = 0
            prev = 0

            for i in range(len(nums)):
                t = prev
                prev = max(cur+nums[i], prev)
                cur = t
            return prev

        if len(nums) == 0:
            return 0
        if len(nums) == 1:
            return nums[0]
        else:
            return max(Srob(nums[1:]), Srob(nums[:-1]))
