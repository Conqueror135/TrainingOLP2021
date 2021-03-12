bool smartNumber(int n)
{
    n=abs(n);
    int x=n%10;
    n/=10;
    if(n==0)return false;
    while(n>0){
        if(n%10<=x)return false;
        x=n%10;
        n/=10;
    }
    return true;
}