def solution(A):
    A = list(set(A))
    A.sort()
    temp = 1
    for i in A:
        if i <= 0:
            pass
        else:
            if i == temp:
                temp += 1
            else:
                return temp
    return temp
A = [1, 1000]
print(solution(A))

