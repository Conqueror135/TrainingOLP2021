#include<bits/stdc++.h>

using namespace std;
int d[55555], c[55555], s[55555];
bool divideTheArrayEqually(std::vector<int> arr)
{
    int sum=0, i, j, n=arr.size(), m;
    vector<int> arr2;
    arr2.push_back(0);
    for(i=0;i<n;i++){
        arr2.push_back(arr[i]);
        sum+=arr[i];
    }

    if(sum%2!=0)return false;
    sum/=2;
    for(i=0;i<=sum;i++){
        d[i]=0;
        c[i]=0;
    }
    //Quy hoach dong
    d[0]=1;
    for(i=1;i<=n;i++){
        for(j=sum;j>=arr2[i];j--){
            if(d[j]==0&&d[j-arr2[i]]==1){
                d[j]=1;
                c[j]=i;
            }
        }
    }
//    for(i=1;i<=sum;i++)
//        cout<<d[i]<<" ";
//   cout<<endl;
//   for(i=1;i<=sum;i++)
//       cout<<c[i]<<" ";
//    cout<<endl;
    m=sum;
    while(c[m]>0){
        s[c[m]]=1;
        m-=arr2[c[m]];
    }
//    for(i=1;i<=sum;i++)
//        cout<<s[i]<<" ";
    for(i=1;i<=sum;i++)
        if(s[i]==1)return true;
    return false;
}
int main(){
    int i, n, x;
    vector<int> arr;
    ifstream f;
    f.open("test.INP.txt");
    f>>n;
    for(i=0;i<n;i++){
        f>>x;
        arr.push_back(x);
    }
    f.close();
    if(divideTheArrayEqually(arr))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
    return 0;
}
