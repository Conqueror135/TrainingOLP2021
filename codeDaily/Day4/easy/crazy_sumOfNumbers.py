def sumOfNumbers(arr,n):
    sum = 0
    for j in range(1,n+1):
        for i in arr:
            if j % i == 0:
                sum += j
                break
    return sum

print(sumOfNumbers([1,2,3,4],10))