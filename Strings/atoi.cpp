int atoi(string str)
{
    //Your code here
    int i = 0, j = 0, k = 0;
    
    int sign = 1;
    
    if(str[0] == '-')
    {
        sign = -1;
        i = 1;
    }
    
    for(; i < str.size(); i ++)
    {
        if(!isdigit(str[i]) && str[i] != '-')
            return -1;
        
        k = k * 10 + (str[i] - '0');
        
    }
    return k * sign;
}
