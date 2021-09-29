class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        res = ''
        def dfs(s1, k):
            nonlocal res
            if len(s1) < k:
                res = res + s1[::-1]
                return
            elif k <= len(s1) < 2*k:
                res = res + s1[:k][::-1] + s1[k:]
                return
            temp = list(s1)[:k]
            temp.reverse()
            res = res + s1[:k][::-1] + s1[k:2*k]
            s1 = s1[2*k:]
            dfs(s1, k)
        dfs(s, k)
        return res

solution = Solution()
s = "abcdefg"
k = 2
res = solution.reverseStr(s,k)
print(res)