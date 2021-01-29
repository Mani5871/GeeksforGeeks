vector<int> subarraySum(int a[], int n, int s){
    
    // Your code here
    vector <int> result;
    int i, j, k, sum;
    result.push_back(-1);
    
    for(i = 0; i < n; i ++)
    {
        sum = 0;
        
        for(j = i; j < n; j ++)
        {
            sum += a[j];
            
            if(sum == s)
            {
                result.clear();
                result.push_back(i + 1);
                result.push_back(j + 1);
                return result;
            }
            
            if(sum > s)
                break;
        }
    }
    
    
    return result;
    
}
