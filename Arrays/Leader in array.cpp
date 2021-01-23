vector<int> leaders(int a[], int n){
    // code here
    vector <int> result;
    result.push_back(a[n - 1]);
    
    int max = a[n - 1], i;
    
    for(i = n - 2; i >= 0; i --)
    {
        if(a[i] >= max)
        {
            result.push_back(a[i]);
            max = a[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;