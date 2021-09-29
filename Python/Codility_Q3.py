def caculate(str):
    numbers = list(map(int, str.split(':')))
    #print(numbers)
    if numbers[0] == 0 and numbers[1] < 5:
        total = numbers[1] * 60 * 3 + numbers[2] * 3
    else:
        if numbers[2] == 0:
            total = numbers[0] * 60 * 150 + numbers[1] * 150
        else:
            total = numbers[0] * 60 * 150 + (numbers[1] + 1) * 150
    return total


s = '00:01:07'
print(caculate(s))

prices = {
   'ACME': 45.23,
   'AAPL': 612.78,
   'IBM': 205.55,
   'HPQ': 37.20,
   'FB': 10.75
}
print(max(prices))    #IBM
print(min(prices))    #AAP
