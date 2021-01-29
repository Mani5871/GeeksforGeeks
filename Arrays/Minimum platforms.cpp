int findPlatform(int arr[], int dep[], int n)
{
	// Your code here
	int i, j, k, curr = 1, max = 1;
	
	sort(arr, arr + n);
	sort(dep, dep + n);
	
	i = 1; j = 0;
	
	int arr_ind, dept_ind;
	
	while(i < n && j < n)
	{
	    arr_ind = arr[i];
	    dept_ind = dep[j];
	    
	    if(arr_ind > dept_ind)
	    {
	        curr --;
	        j ++;
	        
	    }
	    else
	    {
	        curr ++;
	        i ++;
	    }
	    
	    if(curr > max)
	        max = curr;
	}
	return max;
}
