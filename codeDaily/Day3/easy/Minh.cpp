long long maxProduct(std::vector<long> A)
{
    sort(A.begin(),A.end());
    long long res;
    if(A[0]*A[1] > A[A.size()-2]*A[A.size()-1])
        res = A[0]*A[1];
    else
        res = A[A.size()-2]*A[A.size()-1];
    return res;
}