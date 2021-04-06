
string bigSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());

    return str;
}
/////////////////////////////////subtract
string compliment9(string v)
{
    string compliment = "";

    for (int i = 0; i < v.size(); i++) {
        compliment += '9' - v[i] + '0';
    }
    return compliment;
}
string bigSub(string a, string b)
{
    if (a.length() < b.length())
        swap(a, b);
    int l1 = a.length(),
        l2 = b.length();
    int diffLen = l1 - l2;

    for (int i = 0; i < diffLen; i++) {
        b = "0" + b;
    }
    string c = bigSum(a, compliment9(b));
    if (c.length() > a.length()) {
        string::iterator it;
        char bit1 = c[0];
        string bit = { bit1 };
        it = c.begin();
        c.erase(it);
        c = bigSum(c, bit);
        return c;
    }
    else {
        return compliment9(c);
    }
}
  ////////////////////////////////////////////////////////////////////
string bigMul(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";
    vector<int> result(len1 + len2, 0);
    int i_n1 = 0;
    int i_n2 = 0;
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j=len2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
    if (i == -1)
    return "0";
    string s = "";

    while (i >= 0)
        s += std::to_string(result[i--]);

    return s;
}
// A function to perform division of large numbers
string bigDiv(string number, int divisor)
{
    string ans;
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');
    while (number.size() > idx) {
        ans += (temp / divisor) + '0';
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }
    if (ans.length() == 0)
        return "0";
    return ans;
}
int bigCompare(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
        return 1;
    if (n2 < n1)
        return 2;

    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return 1;
        else if (str1[i] > str2[i])
            return 2;

    return 0;
}
