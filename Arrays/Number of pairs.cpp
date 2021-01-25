class Solution{   
public:

    int index(int y[], int n, int key)
    {
        int low = 0, high = n - 1, mid, ind = -1;
        
        while(low <= high)
        {
            mid = (low + high) / 2;
            
            if(y[mid] > key)
            {
                ind = mid;
                high = mid -1;
            }
            
            else
                low = mid + 1;
        }
        
        return ind;
    }



    long long countPairs(int x[], int y[], int m, int n) {
        // code here
        int one = 0, two = 0, three = 0, four = 0, zero = 0;
        long long ans = 0;
        
        sort(x, x + m);
        sort(y, y + n);
        
        for(int i = 0; i < n; i ++)
        {
            switch(y[i])
            {
                case 0: zero ++; break;
                case 1: one ++; break;
                case 2: two ++; break;
                case 3: three ++; break;
                case 4: four ++; break;
            }
        } 
        
        for(int i = 0; i < m; i ++)
        {
            if(x[i] == 0)
                continue;
                
            if(x[i] == 1)
            {
                ans += zero;
                continue;
            }
            
            if(x[i] == 2)
            {
                ans -= three;
                ans -= four;
                
                int ind = index(y, n, 2);
                
                if(ind != -1)
                    ans += (n - ind);
                    
                ans += one;
                ans += zero;
                continue;
            }
            
            int ind = index(y, n, x[i]);
                
            if(ind != -1)
                ans += (n - ind);
            ans += zero;
            ans += one;
            if(x[i] == 3)
                ans += two;
            
        }
        return ans;
    }
};