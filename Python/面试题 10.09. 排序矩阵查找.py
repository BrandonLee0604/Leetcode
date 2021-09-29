import math

class Solution:
    def searchMatrix(self, matrix, target) -> bool:
        if len(matrix) == 0:
            return False
        m = len(matrix)
        n = len(matrix[0])
        j = 0
        while j < n:
            up = 0
            down = m-1
            while up <= down:
                mid = (down+up)//2
                if matrix[mid][j] < target:
                    up = mid + 1
                elif matrix[mid][j] > target:
                    down = mid - 1
                else:
                    return True
            j += 1
        return False


solution = Solution()
matrix = [
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
target = 17
print(solution.searchMatrix(matrix, target))