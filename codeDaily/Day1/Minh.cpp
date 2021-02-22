bool Check(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
std::vector<int> findSpecialPrime(int n)
{
    vector <int> tmp;
    tmp.push_back(2);
    tmp.push_back(3);
    tmp.push_back(5);
    tmp.push_back(7);
    vector <int> res;
    int tpm = 0;
    int start = 0;
    int check;
    while(tpm <= n){
        tpm = tmp[start];
        for(int i = 1; i <= 9; i += 2){
            check = tpm*10 + i;
            if(Check(check) == true)
                tmp.push_back(check);
        }
        start++;
    }
    for(int i = 0; i < tmp.size(); i++){
        if(tmp[i] <= n){
            res.push_back(tmp[i]);
        }
    }
    return res;
}