void rearrange(long long *arr, int n) 
{ 
	
	// Your code here
	long long i, max = arr[n - 1] + 1, min = arr[0], mini = 0, maxi = n - 1;
	
	for(i = 0; i < n; i ++)
	{
	    if((i % 2) == 0)
	    {
	        arr[i] += (arr[maxi] % max) * max;
	        maxi --;
	    }
	    else
	    {
	        arr[i] += (arr[mini] % max) * max;
	        mini ++;
	    }
	}
	
	for(i = 0; i < n; i ++)
	    arr[i] /= max;
	
	 
}