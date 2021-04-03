int majorityElement(int a[], int n)
{
    
    // your code here
    int max = INT_MIN, i , j;
    
    for(i = 0; i < n; i ++)
        if(a[i] > max)
            max = a[i];
            
    int arr[max + 1];
    
    for(i = 0; i < max + 1; i ++)
        arr[i] = 0;
    
    for(i = 0; i < n; i ++)
        arr[a[i]] ++;
    
    for(i = 0; i < max + 1; i ++)
        if(arr[i] > n / 2)
            return i;
    return -1;