class Solution:
    def findMaxForm(self, strs, m, n):
        if len(strs) == 0:
            return 0
        dp = [[0] * (n + 1) for _ in range(m + 1)]
        for strs_item in strs:
            zeros = strs_item.count("0")
            ones = strs_item.count("1")
            for i in range(m, zeros - 1, -1):
                for j in range(n, ones - 1, -1):
                    dp[i][j] = max(dp[i][j], 1 + dp[i - zeros][j - ones])
        return dp[m][n]


solution = Solution()
strs = ["10", "0001", "111001", "1", "0"]
m = 5
n = 3
print(solution.findMaxForm(strs, m, n))