int maxSubarraySum(int arr[], int n){
    
    // Your code here
    int i, j, k, sum1 = arr[0], sum = INT_MIN;
    
    for(i = 1; i < n; i ++)
    {
        if(sum1 + arr[i] > 0)
            sum1 += arr[i];
            
        else
        {
            if(sum > sum1)
                sum = sum1;
            sum1 = 0;
        }
    }
    if(sum1 > sum)
        sum = sum1;
    
    return sum;
}