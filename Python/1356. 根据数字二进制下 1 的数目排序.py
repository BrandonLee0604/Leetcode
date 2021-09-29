
class Solution:
    def sortByBits(self, arr):
        arr.sort(key=lambda i: (str(bin(i)).count("1"), i))
        return arr


solution = Solution()
arr = [1024,512,256,128,64,32,16,8,4,2,1]
print(str(bin(arr[3])).count("1"))
print(solution.sortByBits(arr))