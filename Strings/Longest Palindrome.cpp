#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;

bool ispal(string str)
{
    int l = 0, h = str.size() - 1;
    
    while(l <= h)
    {
        if(str[l ++] != str[h --])
            return false;
    }
    return true;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    string str, res;
	    cin >> str;
	    int i, j, k, n = str.size();
	    res = str[0];
	    
	    int a[n][n];
	    
	    for(i = 0; i < n; i ++)
	    {
	        for(j = 0; j < n; j ++)
	        {
	            if(i < j)
	                a[i][j] = INT_MAX;
	             
	            else if(i == j)
	                a[i][j] = 1;
	                
	            else
	                a[i][j] = 0;
	        }
	    }
	    
	    for(i = 0, j = 1; i < n; i ++, j ++)
	    {
	        if(str[i] == str[j])
	        {
	            a[i][j] = 1;
	            string str1 = str.substr(i, 2);
	            
	            if(str1.size() > res.size())
	                res = str1;
	        }
	    }
	    
	    for(int k = 3; k <= n; k ++)
	    {
	        for(i = 0; i < n - k + 1; i ++)
	        {
	            j = i + k - 1;
	            string str1 = str.substr(i, k);

	            if(str[i] == str[j] && a[i + 1][j - 1] == 1)
	            {
	                
	                a[i][j] = 1;
	                if(str1.size() > res.size())
	                    res = str1;
	            }
	        }
	    }
	    
	    
	    cout << res << endl;
	}
	return 0;
}
