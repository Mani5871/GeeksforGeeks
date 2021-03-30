class Solution {
public:
    
    int cnt;
    map<vector<int>, int>map1;
    
    
    
    int fact1(int n)
    {
        if(n == 0)
            return 1;
        return n * fact1(n - 1);
    }
    
    int fact(int n, int r)
    {
        double i = 0, j = 1, k = 1;
        
        // for(i = 0; i < r; i ++)
        //     j *= n--;
        
        for(i = 1; i <= r; i ++)
            k *= (n - r + i) /i;
        
        return (int)k;
    }
    
    int path(int m, int n, int i, int j)
    {
        
        if(i == m - 1 && j == n - 1)
            return 1;
        
        vector<int> data = {i, j};
        if(map1.find(data) != map1.end())
            return map1[{i, j}];
        
        if(i >= m || j >= n)
            return 0;
        
        map1[{i, j}] = path(m, n, i + 1, j) + path(m, n, i, j + 1);
        
        return map1[{i, j}];
    }
    
    int uniquePaths(int m, int n) {
        
        int N = m + n - 2, r = m - 1;
        
        double res = 1;
        
        for(int i = 1; i <= r; i ++)
            res *= (N - r + i) / i;
        
        return (int)(res);
        
        return fact(m + n - 2, m - 1);
        
        return path(m, n, 0, 0);
        
    }
};
