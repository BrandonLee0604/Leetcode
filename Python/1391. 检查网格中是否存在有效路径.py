class Solution:
    def hasValidPath(self, grid) -> bool:
        m = len(grid)
        n = len(grid[0])
        a, b = 0, 0
        visited = [[0] * n for i in range(m)]
        #street = {1: ("u", "d"), 2: ("l", "r"), 3: ("l", "d"), 4: ("r", "d"), 5: ("l", "u"), 6: ("r", "u")}
        while a != m-1 or b != n-1:
            visited[a][b] = 1
            if grid[a][b] == 2:
                if a > 0:
                    if visited[a-1][b] == 1:
                        pass
                    else:
                        if grid[a-1][b] not in [1, 3, 4]:
                            return False
                        else:
                            a -= 1
                elif a < m - 1:
                    if visited[a+1][b] == 1:
                        pass
                    else:
                        if grid[a+1][b] not in [1, 5, 6]:
                            return False
                        else:
                            a += 1
            elif grid[a][b] == 1:
                if b > 0:
                    if visited[a][b-1] == 1:
                        pass
                    else:
                        if grid[a][b-1] not in [2, 4, 6]:
                            return False
                        else:
                            b -= 1
                elif b < n - 1:
                    if visited[a][b+1] == 1:
                        pass
                    else:
                        if grid[a][b+1] not in [2, 3, 5]:
                            return False
                        else:
                            b += 1
            elif grid[a][b] == 3:
                if b > 0:
                    if visited[a][b-1] == 1:
                        pass
                    else:
                        if grid[a][b-1] not in [2, 4, 6]:
                            return False
                        else:
                            b -= 1
                elif a < m - 1:
                    if visited[a+1][b] == 1:
                        pass
                    else:
                        if grid[a+1][b] not in [1, 5, 6]:
                            return False
                        else:
                            a += 1
            elif grid[a][b] == 4:
                if b < n - 1:
                    if visited[a][b+1] == 1:
                        pass
                    else:
                        if grid[a][b+1] not in [2, 3, 5]:
                            return False
                        else:
                            b += 1
                elif a < m - 1:
                    if visited[a+1][b] == 1:
                        pass
                    else:
                        if grid[a+1][b] not in [1, 5, 6]:
                            return False
                        else:
                            a += 1
            elif grid[a][b] == 5:
                if b > 0:
                    if visited[a][b-1] == 1:
                        pass
                    else:
                        if grid[a][b-1] not in [2, 4, 6]:
                            return False
                        else:
                            b -= 1
                elif a > 0:
                    if visited[a-1][b] == 1:
                        pass
                    else:
                        if grid[a-1][b] not in [1, 3, 4]:
                            return False
                        else:
                            a -= 1
            elif grid[a][b] == 6:
                if b < n - 1:
                    if visited[a][b+1] == 1:
                        pass
                    else:
                        if grid[a][b+1] not in [2, 3, 5]:
                            return False
                        else:
                            b += 1
                elif a > 0:
                    if visited[a-1][b] == 1:
                        pass
                    else:
                        if grid[a-1][b] not in [1, 3, 4]:
                            return False
                        else:
                            a -= 1

        return True

solution = Solution()
grid = [[2,4,3],[6,5,2]]
print(solution.hasValidPath(grid))
