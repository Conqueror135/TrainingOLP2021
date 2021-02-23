std::vector<int> createRectangle(std::vector<std::vector<int>> points)
{
    int a, b, c;
    vector <int> res;
    a = (points[0][0] - points[1][0])*(points[0][0] - points[1][0]) + (points[0][1] - points[1][1])*(points[0][1] - points[1][1]);
    b = (points[0][0] - points[2][0])*(points[0][0] - points[2][0]) + (points[0][1] - points[2][1])*(points[0][1] - points[2][1]);
    c = (points[1][0] - points[2][0])*(points[1][0] - points[2][0]) + (points[1][1] - points[2][1])*(points[1][1] - points[2][1]);
    if(a > b && a > c){
        res.push_back(points[0][0] + points[1][0] - points[2][0]);
        res.push_back(points[0][1] + points[1][1] - points[2][1]);
        return res;
    }
    else if(b > c){
        res.push_back(points[0][0] + points[2][0] - points[1][0]);
        res.push_back(points[0][1] + points[2][1] - points[1][1]);
        return res;
    }
    else{
        res.push_back(points[1][0] + points[2][0] - points[0][0]);
        res.push_back(points[1][1] + points[2][1] - points[0][1]);
        return res;
    }
}