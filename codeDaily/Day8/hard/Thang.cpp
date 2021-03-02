
int theTriangle(std::vector<std::vector<int>> a)
{
    int i, j, n=a.size(), re=0;
    for(i=1;i<n;i++){
        for(j=0;j<i+1;j++){
            if(j==0)
                a[i][j]+=a[i-1][j];
            else if(j==i)
                a[i][j]+=a[i-1][j-1];
            else
                a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
        }
    }
    for(i=0;i<n;i++)
        if(a[n-1][i]>re)
            re=a[n-1][i];

    return re;
}