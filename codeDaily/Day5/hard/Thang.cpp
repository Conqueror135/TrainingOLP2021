#include<bits/stdc++.h>
using namespace std;
int dd(int x1, int y1, int x2, int y2){
    return pow(x2-x1,2)+pow(y2-y1,2);
}
std::vector<int> findPoint(int x1, int y1, int x2, int y2, int x3, int y3){
    std::vector<int> re;
    int x4=(x2+x3)-x1, y4=(y2+y3)-y1;
    re.push_back(x4);
    re.push_back(y4);
    return re;
}
std::vector<int> createRectangle(std::vector<std::vector<int>> points)
{
    std::vector<int> re;
    int d1=dd(points[0][0],points[0][1],points[1][0],points[1][1]);
    int d2=dd(points[0][0],points[0][1],points[2][0],points[2][1]);
    int d3=dd(points[1][0],points[1][1],points[2][0],points[2][1]);
    if(d1+d2 == d3)
        re= findPoint(points[0][0],points[0][1],points[1][0],points[1][1],points[2][0],points[2][1]);
    else if(d1+d3 == d2)
        re= findPoint(points[1][0],points[1][1],points[0][0],points[0][1],points[2][0],points[2][1]);
    else
        re= findPoint(points[2][0],points[2][1],points[0][0],points[0][1],points[1][0],points[1][1]);
    return re;
}
int main(){
    vector<std::vector<int>> points;
    int i, j;
    points.resize(3);
    for(i=0;i<3;i++){
        points[i].resize(2);
        for(j=0;j<2;j++)
            cin>>points[i][j];
    }
    for(int x:createRectangle(points))
        cout<<x<<" ";
    return 0;
}
