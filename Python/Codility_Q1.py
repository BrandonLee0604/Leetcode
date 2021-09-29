def solution(A):
    count1, count2 = 0, 0
    flag1 = 1
    flag2 = 0
    for i in A:
        if i != flag1:
            count1 += 1
        if i != flag2:
            count2 += 1
        flag1 ^= 1
        flag2 ^= 1
    return min(count1, count2)

A = []
print(solution(A))


print(int('20000000000000'))

