class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        index = 0
        for i in s:
            if t[index:].find(i) == -1:
                return False
            else:
                index += t[index:].find(i) + 1
        return True

solution = Solution()
s = "aaaaaa"
t = "bbaaaa"
res = solution.isSubsequence(s,t)
print(res)


