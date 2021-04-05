#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
bool cp(const int ia,const int ib){
    return ia>ib;
}
bool pairWithExactlySum(std::vector<int> a, std::vector<int> b, int s)
{
    int n= a.size(), m= b.size(), i=0, j=0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),cp);
    while(i<n&&j<m){
        if(a[i]+b[j]==s)return true;
        if(a[i]+b[j]<s)
            i++;
        else j++;
    }
    return false;
}
int main(){
    vector<int> a, b;
    int n, m, s, i, x;
    cin>>n>>m>>s;
    for(i=0;i<n;i++){
        cin>>x;
        a.push_back(x);
    }
    for(i=0;i<m;i++){
        cin>>x;
        b.push_back(x);
    }
    if(pairWithExactlySum(a,b,s))
    cout<<"true";
    else
       cout<<"false";
    return 0;
}