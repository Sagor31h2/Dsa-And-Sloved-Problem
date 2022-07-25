from ast import List


class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:

        l = len(nums)
        res = [1] * (l)
        pre = nums[0]
        # print(res)
        for i in range(1, l):
            res[i] = pre
            pre = pre*nums[i]

        pre = nums[-1]
        for i in reversed(range(l-1)):
            res[i] = res[i]*pre
            pre = pre*nums[i]

        return res
