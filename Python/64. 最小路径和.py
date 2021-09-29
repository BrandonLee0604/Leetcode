class Solution:
    def minPathSum(self, grid):
        if len(grid) == 0:
            return 0
        for i in range(len(grid)-1, -1, -1):
            for j in range(len(grid[0])-1, -1, -1):
                if i == len(grid)-1:
                    if j < len(grid[0])-1:
                        grid[i][j] += grid[i][j+1]
                elif j == len(grid[0])-1:
                    if i < len(grid)-1:
                        grid[i][j] += grid[i+1][j]
                else:
                    grid[i][j] += min(grid[i+1][j], grid[i][j+1])
        return grid[0][0]

solution = Solution()
grid = [[1,3,1],[1,5,1],[4,2,1]]
print(solution.minPathSum(grid))
