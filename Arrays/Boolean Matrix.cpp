class Solution
{   
public:
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int row[matrix.size()], col[matrix[0].size()];
        
        int n = matrix.size();
        
        int i, j;
        
        for(i = 0; i < n; i ++)
            row[i] = 0;
            
        for(i = 0; i < matrix[0].size(); i ++)
            col[i] = 0;
        
        for(i = 0; i != matrix.size(); i ++)
        {
            for(j = 0; j != matrix[i].size(); j ++)
            {
                if(matrix[i][j] == 1)
                {
                    row [i] = 1;
                    col [j] = 1;
                }
            }
        }
        
        for(i = 0; i != matrix.size(); i ++)
        {
            for(j = 0; j != matrix[i].size(); j ++)
            {
                if(row[i] == 1 || col[j] == 1)
                    matrix[i][j] = 1;
            }
        }
    }
};
