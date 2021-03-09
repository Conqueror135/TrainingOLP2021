#include<bits/stdc++.h>
#include<queue>
using namespace std;
int c_num(int x){
    int c=0;
    while(x>0){
        c++;
        x/=10;
    }
    return c;
}
std::vector<int> createNumber(int n, int k)
{
    vector<int> re;
    if(n==1&&k==0){
        re.push_back(0);
    }
    queue<int> q_t;
    int s, i, x, t;
    for(i=1;i<=9;i++)
        q_t.push(i);

    while(c_num(q_t.front())<n){
        x=q_t.front();

        q_t.pop();
        t=x%10;
        if(t-k>=0&&k>0)
            q_t.push(x*10+t-k);

        if(t+k<=9&&k>0)
            q_t.push(x*10+t+k);
        if(k==0)
            q_t.push(x*10+t);
    }
    while(!q_t.empty()){
        re.push_back(q_t.front());
        q_t.pop();
    }

    return re;
}
int main(){
    vector<int> re;
    int n, k;
    cin>>n>>k;
    re=createNumber(n,k);
    for(int i:re)
        cout<<i<<" ";
    return 0;
}
