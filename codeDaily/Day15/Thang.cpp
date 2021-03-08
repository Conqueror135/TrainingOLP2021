#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
long long minNumberInString(string arg1)
{
    long long i, j, n=arg1.length(), imin=100, sig=1, s=0, imin2=100;
    bool dk=false;
    for(i=0;i<n;i++){
        if(arg1[i]>='0'&&arg1[i]<='9'){
            dk=true;
            s=s*10+(arg1[i]-48);
            if(arg1[i]-48<imin){
                imin=arg1[i]-48;
            }
            if(i>0&&arg1[i-1]=='-'){
                sig=-1;
            }
            if(s==0)
                continue;
            imin2=min(imin2, s*sig);
        }
        else{
            sig=1;
            s=0;
        }
    }
    if(dk==false)return -1;
    return min(imin,imin2);
}
int main(){
    string s;
    cin>>s;
    cout<<minNumberInString(s);
    return 0;
}
