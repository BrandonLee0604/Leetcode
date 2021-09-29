class Solution:
    def isLongPressedName(self, name: str, typed: str) -> bool:
        point1 = list(name)
        point2 = list(typed)
        i, j = 0, 0
        while j != len(point2)-1 :
            if i < len(point1)-1 and point1[i] == point2[j]:
                i += 1
                j += 1
            elif point1[i] != point2[j] and point2[j] == point2[j-1] and j > 0:
                j += 1
            else:
                return False
        return i == len(name)-1

solution = Solution()
name = "alex"
typed = "aaleexa"
print(name[0], name[1])
print(solution.isLongPressedName(name, typed))