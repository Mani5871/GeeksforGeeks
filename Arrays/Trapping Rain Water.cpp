int min(int a, int b)
{
    if(a < b)
        return a;
    return b;
}

int max(int a, int b)
{
    if(a > b)
        return a;
    return b;
}

int trappingWater(int arr[], int n){

    // Your code here
    
    int left[n], right[n], i , j, k;
    
    left[0] = arr[0];
    right[n - 1] = arr[n - 1];
    
    for(i = 1; i < n; i ++)
    {
        left[i] = max(left[i - 1], arr[i]);
    }
    
    for(i = n - 2; i >= 0; i --)
    {
        right[i] = max(right[i + 1], arr[i]);
    }
    
    int res = 0;
    
    for(i = 0; i < n; i ++)
    {
        res += min(left[i], right[i]) - arr[i];
    }
    
    return res;

}
