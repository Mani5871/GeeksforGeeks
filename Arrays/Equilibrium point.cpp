int equilibriumPoint(long long a[], int n) {

    // Your code here
    if(n == 1)
        return 1;
    long long left[n], right[n];
    
    int i, j, k;
    
    for(i = 0; i < n ; i ++)
    {
        left[i] = 0;
        right[i] = 0;
    } 
    
    long long sum = 0;
    
    for(i = 0; i < n; i ++)
    {
        sum += a[i];
        left[i] = sum;
    }
    
    sum = 0;
    
    for(i = n - 1; i >= 0; i --)
    {
        sum += a[i];
        right[i] = sum;
    }
    
    for(i = 1; i < n - 1; i ++)
    {
        if(left[i - 1] == right[i - 1])
            return i;
    }
    
    return -1;
    
    
    
