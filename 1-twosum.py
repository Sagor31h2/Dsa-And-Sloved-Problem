from typing import List


class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        a = len(nums)
        hashmap = {}
        for i in range(0, a-1):
            k = target-nums[i]
            if k in hashmap:
                return[hashmap[k], i]
            hashmap[nums[i]] = i


f = Solution()
print(f.twoSum([2, 7, 11, 9], 9))
