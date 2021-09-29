from cffi.backend_ctypes import xrange


class Solution:
    def binaryGap(self, n: int) -> int:
        num = bin(n)[2:]
        print(num)
        A = [i for i in xrange(32) if (n >> i) & 1]
        print(A)
        if num.count('1') < 2:
            return 0
        maxi = 0
        l = len(num)
        left = num.find('1')
        for i in range(left + 1, l):
            if num[i] == '1':
                maxi = max(maxi, i-left)
                left = i
        return maxi

solution = Solution()
n = 22
res = solution.binaryGap(n)
print(res)
