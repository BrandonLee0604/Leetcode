class Solution:
    def minSwapsCouples(self, row) -> int:
        res = 0
        for i in range(0, len(row), 2):
            temp = row[i] ^ 1  # 找出来末位不一样的partner
            if temp == row[i + 1]:
                continue
            res += 1
            for j in range(i + 2, len(row)):
                if temp == row[j]:
                    row[i + 1], row[j] = row[j], row[i + 1]  # Python 交换两数
                    break
        return res

row = [0, 2, 1, 3]
solution = Solution()
print(solution.minSwapsCouples(row))