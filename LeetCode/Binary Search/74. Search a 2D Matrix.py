class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:

        i = len(matrix)-1
        j = len(matrix[0])-1
        r = 0
        c = j
        while r <= i and c >= 0:
            currentValue = matrix[r][c]
            # print(currentValue)
            if currentValue == target:
                return True
            elif currentValue < target:
                r += 1
            else:
                c -= 1
        return False
