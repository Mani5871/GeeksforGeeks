// Time Complexity : O(N ^ 2)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/number-of-paths0926/1#

int paths(int i, int j, int m, int n, int cnt)
{
    if(i < 0 || j < 0 || i >= m || j >= n)
        return 0;
    
    if(i == m - 1 && j == n - 1)
    {
        return 1;
    }
    
    return paths(i + 1, j, m, n, cnt) + paths(i, j + 1, m, n, cnt);
    
}


long long  numberOfPaths(int m, int n)
{
    // Code Here
    return paths(0, 0, m, n, 0);
}
