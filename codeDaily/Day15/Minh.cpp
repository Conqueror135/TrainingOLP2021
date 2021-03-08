long long minNumberInString(string arg1)
{
    long long n = arg1.size();
    long long result = 999999999999999999, count = 0, count1 = 0;
    long long tmp = 0;

    for(int i = 0; i < n; i++){
        if(arg1[i] >= '0' && arg1[i] <= '9'){
            tmp = arg1[i] - 48;
            if(tmp < result)    result = tmp;
            count++;
        }

        if(arg1[i] == '-'){
            tmp = 0;
            int j;

            for(int j = i + 1; j < n; j++){
                int tpm = 0;

                if(arg1[j] >= '0' && arg1[j] <= '9'){
                    tpm = (arg1[j] - 48);
                    tmp = tmp*10 + tpm;
                    count1++;
                }

                if(arg1[j] < '0' || arg1[j] > '9')    break;
            }

            tmp = tmp * (-1);

            if(tmp < result && count1 > 0)    result = tmp;
            count1 = 0;
            count++;
        }
    }

    if(count == 0)  return -1;
    return result;
}