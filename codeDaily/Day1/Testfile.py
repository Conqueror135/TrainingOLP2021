def sumDivOfA(a,n):
    mod = int(1000000007)
    tmp = int(a)
    tam = int(n)
    x = tam%tmp
    sum1 = ((tam - x)*(tmp + (tam - x))) % mod
    sum2 = (2*tmp) % mod
    sum = sum1/sum2
    return sum
def main() :
    a = input()
    n = input()
    res = sumDivOfA(a,n)
    print(res)