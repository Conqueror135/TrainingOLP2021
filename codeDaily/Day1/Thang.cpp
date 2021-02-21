#include<bits/stdc++.h>
using namespace std;
bool check(int x){
    if(x<2)return false;
    if(x==2)return true;
    for(int i=2;i<=sqrt(x);i++)
        if(x%i==0)return false;
    return true;
}
int iadd(vector<int> &arr, int n, int x){
    int i, s=x*10 ;
    if(s<n)
    for(i=1;i<=9;i++){
        if(check(s+i)){
            if(s+i>n) return 0;
            arr.push_back(s+i);
        }
    }
    return 0;
}
vector<int> findSpecialPrime(int n)
{
    int k=0;
    vector<int> re;
    iadd(re,n,0);
    for(k=0;k<re.size();k++){
        if(re[k]<n)
            iadd(re,n,re[k]);
    }
    sort(re.begin(), re.end());
    return re;
}
int main(){
	vector<int> arr;
//	arr.push_back(0);
//	test(arr);
	int n;
	cin>>n;
	arr=findSpecialPrime(n);
	for(int i=0;i<arr.size();i++)
	cout<<arr[i]<<" ";
	return 0;
}
