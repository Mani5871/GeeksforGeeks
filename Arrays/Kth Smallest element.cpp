int kthSmallest(int a[], int n, int k){
    // Your code here
    int j;
    
    priority_queue <int, vector<int>, greater<int> > pq;
    
    for(int i = 0; i < n; i ++)
        pq.push(a[i]);
        
    
    for(int i = 0; i < k; i ++)
    {
        j = pq.top();
        pq.pop();
    }
    
    return j;
}