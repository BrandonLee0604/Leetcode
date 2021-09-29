class Solution:
    def escapeGhosts(self, ghosts, target):
        distanceST = abs(target[0]) + abs(target[1])
        distanceGT = float('inf')
        for i in ghosts:
            temp = abs(target[0] - i[0]) + abs(target[1] - i[1])
            if temp < distanceGT:
                distanceGT = temp
        return distanceST < distanceGT

ghosts = [[5,0],[-10,-2],[0,-5],[-2,-2],[-7,1]]
target = [7,7]
solution = Solution()
print(solution.escapeGhosts(ghosts, target))