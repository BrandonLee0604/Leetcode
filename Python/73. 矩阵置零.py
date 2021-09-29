class Solution:
    def setZeroes(self, matrix) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        loc = list()
        m, n = len(matrix), len(matrix[0])
        for i in range(0, m):
            for j in range(0, n):
                if matrix[i][j] == 0:
                    loc.append([i, j])
        if loc:
            a, b = zip(*loc)
            print(a)
            print(b)
        else:
            return matrix
        for i in a:
            for j in range (n):
                matrix[i][j] = 0
        for i in b:
            for j in range (m):
                matrix[j][i] = 0
        return matrix

solution = Solution()
matrix = [
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
res = solution.setZeroes(matrix)
print(res)
