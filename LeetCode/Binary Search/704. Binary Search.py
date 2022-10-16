class Solution:
    def search(self, nums: List[int], target: int) -> int:
        def bs(l, r):
            if l > r:
                return -1
            mid = (l+r)//2

            mn = nums[mid]

            if mn == target:
                return mid
            elif mn > target:
                return bs(l, mid-1)
            else:
                return bs(mid+1, r)
        return bs(0, len(nums)-1)
