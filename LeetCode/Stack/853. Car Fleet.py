class Solution:
    def carFleet(self, target: int, position: List[int], speed: List[int]) -> int:
        stack = []
        for pos, val in sorted(zip(position, speed))[::-1]:
            requiredTime = (target-pos)/val
            if not stack:
                stack.append(requiredTime)
            elif requiredTime > stack[-1]:
                stack.append(requiredTime)
        return len(stack)
