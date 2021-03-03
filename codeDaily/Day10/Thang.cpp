long long mafia(std::vector<int> arr)
{
    long long i, imax=0, n=arr.size(), re=0,s=0;
    for(i=0;i<n;i++){
        s+=arr[i];
        if(arr[i]>imax)
            imax=arr[i];
    }
    re=s/(n-1);
    if(s%(n-1)!=0)
        re++;
    if(re<imax)
        re=imax;
    return re;
}