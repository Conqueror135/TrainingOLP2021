#include<bits/stdc++.h>
using namespace std;
bool i_compare(const long long a, const long long b){
    return a>b;
}
vector<int> marathonRanking(vector<long long> ranking, vector<int> scores)
{

    int i, j, n=ranking.size(), m=scores.size(), p, k=0;
    vector<long long> ranking2;
    vector<int> re;
    sort(ranking.begin(),ranking.end(),i_compare);
    ranking2.push_back(ranking[0]);
    for(i=1;i<n;i++){
        if(ranking[i]==ranking[i-1])
            continue;
        ranking2.push_back(ranking[i]);
    }
    p=ranking2.size()-1;
    for(i=0;i<m;i++){
        while(scores[i]>=ranking2[p]){
            p--;
            if(p<0){
                k=1;
                for(j=i;j<m;j++)
                    re.push_back(1);
                break;
            }
        }
        if(k==0)re.push_back(p+2);
        else break;
    }
    return re;
}
int main(){
    int t, n, m, i, x1;
    long long x2;
    vector<int> scores;
    vector<long long> ranking;
    FILE *f=fopen("testCase.txt","r");
    if(f==NULL){
        cout<<"This file couldn't found!";
        exit(1);
    }
    fscanf(f,"%d", &t);
    while(t--){
        fscanf(f,"%d %d",&n,&m);
        for(i=0;i<n;i++){
            fscanf(f,"%lld",&x2);
            ranking.push_back(x2);
        }
        for(i=0;i<m;i++){
            fscanf(f,"%d",&x1);
            scores.push_back(x1);
        }
        for(int k:marathonRanking(ranking, scores)){
            cout<<k<<" ";
        }
        cout<<endl;
        ranking.clear();
        scores.clear();
    }
    fclose(f);
    return 0;
}
