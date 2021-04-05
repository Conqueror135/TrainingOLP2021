def pair_with_exactly_sum(a,b,s):
    tmp =set(a)
    tpm =set(b)
    for i in tpm:
        for j in tmp:
            if i + j==s:
                return True
    return False