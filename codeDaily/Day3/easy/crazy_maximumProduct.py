def find_max(A):
    A.sort()
    min = A[-1]*A[-2]
    max = A[0] * A[1]
    if min > max:
        return min
    return max