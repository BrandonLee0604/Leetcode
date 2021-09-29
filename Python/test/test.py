def dfs(requirement, sizes, count, num):
    if count > num or requirement == 0:
        return
    for i in sizes:
        count += 1
        if i <= requirement:
            requirement -= i
            dfs(requirement, sizes, count, num)


def getUmbrellas(requirement, sizes):
    if requirement < min(sizes):
        return -1
    count, num = 0, 0
    dfs(requirement, sizes, count, num)
    return num

requirement = 4
sizes = [2,2,4]
print(getUmbrellas(requirement, sizes))