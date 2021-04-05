def find_sqroot(n):
    a = int(n)
    b = int(1)
    while b*b < a :
        b = b * 10
    if b*b == a :
        return str(int(b))
    c = int(b/2)
    while c < b :
        if c*c == a:
            return str(int(c))
        if c*c < a:
            c = int(c + (b-c)//2)
            if int(b) - 1 == int(c) and c*c <= a:
                return str(int(c))
        if c*c > a:
            b = int(c)
            c = int(b // 2)
    return str(int(b))
n = input()
print(find_sqroot(n))