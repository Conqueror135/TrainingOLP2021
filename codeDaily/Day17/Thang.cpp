#include <bits/stdc++.h>
#include <string>
using namespace std;

int findpaper(int K, int N)
{
    if(pow(2,K)<N)return -1;
    int  p = 1, q;
    string s;
    K--; N--; s = "";
    while (K>=0){
    if (((N >> K) & 1) == 0)
        s += 'D';
    else{
        s += 'U';
        N = ~N;
        }
        K--;
    }

    for (int i = 0; i < s.size(); i++){
        if (s[i] == 'U'){
            int temp = p;
            p = p+(q << 1)+1;
            q = temp-1;
        }
        else
            q += p+q;
    }
    return p;
}
int main(){
    int K, N;
    cin >> K >> N;
    cout<<findpaper(K, N);
    return 0;
}
