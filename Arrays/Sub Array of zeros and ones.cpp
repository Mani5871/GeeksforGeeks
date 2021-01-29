int maxLen(int a[], int n)
{
    // Your code here
    unordered_map <int, int> map1;
    
    int i, j, k, ind = -1, len = 0;
    
    for(i = 0; i < n; i ++)
    {
        if(a[i] == 0)
            a[i] = -1;
    }
    
    int sum = 0;
    
    for(i = 0; i < n; i ++)
    {
        sum += a[i];
        
        if(sum == 0)
        {
            ind = i;
            len = i + 1;
        }
        
        if(map1.find(sum) != map1.end())
        {
            if(len < i - map1[sum])
            {
                ind = 1;
                len = i - map1[sum];
            }
        }
        else
            map1[sum] = i;
    }
    return len;
     
}
