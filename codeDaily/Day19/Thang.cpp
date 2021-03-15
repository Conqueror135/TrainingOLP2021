#include<bits/stdc++.h>
using namespace std;
long long eulerfunction(long long n)
{
    long long i, total=n;
    bool sig;
    for(i=2;i<=n;i++){
            sig=false;
        while(n%i==0){
            n/=i;
            sig=true;
        }
        if(sig){
            total=(total/i)*(i-1);
        }
    }
    return total;
}
int main(){
    long long n;
    cin>>n;
    cout<<eulerfunction(n);
    return 0;
}
