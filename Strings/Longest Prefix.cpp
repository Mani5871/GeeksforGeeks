class Solution{
    public:
    
    string longestCommonPrefix (string a[], int n)
    {
        // your code here
        string prefix = a[0];
        
        for(int i = 1; i < n; i ++)
        {
            while(prefix.size())
            {
                if(a[i].find(prefix) == 0)
                    break;
                
                prefix.pop_back();
            }
            
            if(prefix.size() == 0)
                return "-1";
        }
        return prefix;
    }
};
