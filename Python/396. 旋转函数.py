class Solution:
    def maxRotateFunction(self, A):
        sumA = sum(A)
        l = list(range(len(A)))
        F_zero = 0
        for i in range(len(A)):
            F_zero += A[i] * l[i]
        j = 1
        n = len(A)
        res = F_zero
        while j < len(A):
            temp = F_zero + sumA - n * A[n - j]
            res = max(temp, res)
            F_zero = temp
            j += 1
        return res


'''
    def listsumFunction(self, A, B):
        i = 0
        sum = 0
        while i < len(A):
            sum += A[i]*B[i]
            i += 1
        return sum

    def maxRotateFunction(self, A):
        if len(A) == 0:
            return 0
        i = 0
        l = list(range(len(A)))
        res = self.listsumFunction(A, l)
        while i < len(A)-1:
            A = [A[-1]] + A[0:-1]
            temp = self.listsumFunction(A, l)
            res = max(res, temp)
            i += 1
        return res
'''

solution = Solution()
A = [4, 3, 2, 6]
print(solution.maxRotateFunction(A))
