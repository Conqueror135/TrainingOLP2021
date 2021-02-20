import math

def checkPrime(n):
    if n < 2:
        return False
    for i in range(2,math.floor(math.sqrt(n)) + 1,1):
        if n % i == 0:
            return False
    return True


def findSpecialPrime(n):
    primes = []
    for i in range(n):
        count = 0
        k = len(str(i))
        prime = i
        while i >= 0:
            if checkPrime(i) == True:
                count+=1
            else:
                break
            i = i//10
        if count == k:
            primes.append(prime)
    return primes