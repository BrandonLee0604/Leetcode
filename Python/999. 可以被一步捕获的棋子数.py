from collections import defaultdict

class Solution:
    def numRookCaptures(self, board) -> int:
        x, y = 0, 0
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] == 'R':
                    x, y = i, j
        print(x, y)
        count = 0
        dx = [0, 1, 0, -1]
        dy = [1, 0, -1, 0]
        for i in range(4):
            for step(int step = 0;; ++step):
                tx = x + step * dx[i]
                ty = y + step * dy[i]
                if tx < 0 or tx >= 8 or ty < 0 or ty >= 8 or board[tx][ty] == 'B':
                    break
                if board[tx][ty] == 'p':
                    count += 1
                    break
        return count


board = [[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".","R",".",".",".","p"],[".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".","p",".",".",".","."],[".",".",".",".",".",".",".","."],[".",".",".",".",".",".",".","."]]
solution = Solution()
print(solution.numRookCaptures(board))