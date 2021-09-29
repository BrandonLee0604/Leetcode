import collections


class Solution:
    def maxFreq(self, s: str, maxLetters: int, minSize: int, maxSize: int) -> int:
        n = len(s)
        occ = collections.defaultdict(int)
        ans = 0
        for i in range(n - minSize + 1):
            cur = s[i: i + minSize]
            exist = set(cur)
            if len(exist) <= maxLetters:
                occ[cur] += 1
                ans = max(ans, occ[cur])
        return ans



s = "aababcaab"
maxLetters = 2
minSize = 3
maxSize = 4
solution = Solution()
print(solution.maxFreq(s, maxLetters, minSize, maxSize))
