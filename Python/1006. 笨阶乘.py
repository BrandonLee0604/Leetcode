import math

class Solution:
    def clumsy(self, N: int) -> int:
        if N > 4:
            res = (math.floor(N * (N - 1) / (N - 2)) + (N - 3))
            mod = N % 4
            N -= 4
            while N > mod:
                res = res - math.floor(N * (N - 1) / (N - 2)) + (N - 3)
                N -= 4
            if mod == 0:
                return res
            elif mod == 1:
                return res - 1
            elif mod == 2:
                return res - 2
            elif mod == 3:
                return res - 6
        else:
            if N == 4:
                res = (math.floor(N * (N - 1) / (N - 2)) + (N - 3))
            elif N == 3:
                res = math.floor(N * (N - 1) / (N - 2))
            elif N == 2:
                res = N * (N - 1)
            elif N == 1:
                res = N
            return res



solution = Solution()
N = 10
res = solution.clumsy(N)
s = 'abcde'
print(s[0:].find('f'))