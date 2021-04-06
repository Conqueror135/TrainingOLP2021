#include<bits/stdc++.h>
using namespace std;
#include "CalLNum.h"

string re;
string genNum(int n){
    string s="1";
    while(n--){
        s+="0";
    }
    return s;
}
string findSquare(string l, string r, string s){

    if(bigCompare(l,r)<=1){
        string tmp= bigDiv(bigSum(l,r),2);
        string tmp2=bigMul(tmp,tmp);
        int k=bigCompare(tmp2,s);
        if(k==0){
            re=tmp;
            return tmp;
        }
        if(k==1){
            re=tmp;
            return findSquare(bigSum(tmp,"1"),r,s);
        }
        return findSquare(l,bigSub(tmp,"1"),s);
    }
    return re;
}
string findSqroot(string n)
{
    int siz=n.length()-1, x;
    if(siz<8){
        x= stoi(n);
        x=sqrt(x);
        return to_string(x);
    }
    string sl, sr;
    if(siz%2==0){
        sl=genNum(siz/2);
        sr=genNum((siz+2)/2);
        re= sl;
    }
    else{
        sl=genNum((siz-1)/2);
        sr=genNum((siz+1)/2);
        re=sl;
    }
    findSquare(sl,sr,n);
    return re;
}
int main(){
    string s;
    cin>>s;
    cout<<findSqroot(s);
    return 0;
}
