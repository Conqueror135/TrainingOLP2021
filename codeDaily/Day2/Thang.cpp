#include<bits/stdc++.h>
#include<conio.h>

using namespace std;
string kthSpecialNumber(vector<int> arr, int k)
{
    string str="";
    int n= arr.size(), i=0, p=0,  m, s=0, x, j=0, t;
    sort(arr.begin(), arr.end());
    if(arr[0]==0&&n==1)return "-1";
    while(s<=k){
        s+=pow(n,p);
        if(p>0&&arr[0]==0)k+=pow(n,p-1);
        p++;
    }
    if(k<=n)return to_string(arr[k-1]);
    p--;
    s-=pow(n,p);
    m=k-s+1;
    t=p;
    for(i=0;i<p;i++){
        x=pow(n,t)/n;
        j=m/x;
        if(m%x!=0)j++;
        j%=n;
        if(j==0)j=n;
        str=str+to_string(arr[j-1]);
        t--;
    }
    if(str!="")
        return str;
    return "-1";
}
int main(){
	vector<int> arr;
	int k, n, x;
	cin>>n;
	while(n--){
		cin>>x;
		arr.push_back(x);
	}
	cin>>k;
	cout<<kthSpecialNumber(arr,k);
	return 0;
}
