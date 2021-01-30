int val(char a)
{
    switch(a)
    {
        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;
        case 'L' : return 50;
        case 'C' : return 100;
        case 'D' : return 500;
        case 'M' : return 1000;
    }
}

int romanToDecimal(string &str) {
    // code here
    int i, j, k, n = str.size(), ans = val(str[n - 1]), cur = ans;
    
    for(i = n - 2; i >= 0; i --)
    {
        j = val(str[i]);
        
        if(j < cur)
            ans -= j;
        else
            ans += j;
        cur = j;
    }
    return ans;
}
