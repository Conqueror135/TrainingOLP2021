int doingHomework(std::vector<int> a)
{
    int s=a[0], i, n= a.size(), s2=a[0];
    for(i=1;i<n;i++){
        s2+=a[i];
        if(a[i]>a[i-1])
            s=max(s,s2);
        else{
            s2=a[i];
            s=max(s,s2);
        }      
    }
    return s;
}