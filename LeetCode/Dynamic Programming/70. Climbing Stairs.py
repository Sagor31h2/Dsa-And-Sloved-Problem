class Solution:
    def climbStairs(self, n: int) -> int:

        if n == 1 or n == 2:
            return n

        way = 0
        one_step_back = 2
        two_step_back = 1
        for i in range(3, n+1):
            way = one_step_back+two_step_back

            two_step_back = one_step_back
            one_step_back = way
        return way
