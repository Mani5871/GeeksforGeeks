int MissingNumber(vector<int>& array, int n) {
    
    int sum = 0, i;
    for(i = 0; i!= array.size(); i ++)
        sum += array[i];
        
    int sum1 = n * (n + 1) / 2;
    
    return sum1 - sum;
}