class Solution:
    def maxArea(self, height: List[int]) -> int:
        maxWater = 0

        l = 0
        r = len(height)-1

        while l <= r:

            currentWater = (min(height[l], height[r])*(r-l))
            maxWater = max(maxWater, currentWater)
            # print(height[l],height[r],"dis=", r-l, "water=" ,currentWater)
            if height[l] < height[r]:
                l += 1
            else:
                r -= 1
        return maxWater
