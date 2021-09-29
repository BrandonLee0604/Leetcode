def kWeakestRows(mat, k):
    n = len(mat)
    power = [sum(line) for line in mat]
    print("power", power)
    ans = list(range(n))
    ans.sort(key=lambda i: (power[i], i))
    return ans[:k]




mat = [[1,1,0,0,0],[1,1,1,1,0],[1,0,0,0,0],[1,1,0,0,0],[1,1,1,1,1]]
k = 3
print(kWeakestRows(mat, k))