def numEquivDominoPairs(dominoes):
    num = [0] * 100
    ret = 0
    for x, y in dominoes:
        val = (x * 10 + y if x <= y else y * 10 + x)
        ret += num[val]
        num[val] += 1
    return ret





dominoes = [[1,2],[2,1],[1,2],[3,4],[5,6]]

print(numEquivDominoPairs(dominoes))