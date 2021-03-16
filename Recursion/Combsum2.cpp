class Solution {
public:
    
    void comb(vector<int>& arr, vector<int>& ans, vector<vector<int>>& res, int sum, int i, int n)
    {
        if(sum == 0)
        {
            res.push_back(ans);
            return;
        }
        
        for(int j = i; j < n; j ++)
        {
            
            if(j != i && arr[j] == arr[j - 1])
                continue;
            
            if(sum - arr[j] >= 0)
            {
                ans.push_back(arr[j]);
                comb(arr, ans, res, sum - arr[j], j + 1, n);
                ans.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        
        vector<vector<int>> res;
        vector<int> ans;
        
        sort(nums.begin(), nums.end());
        
        comb(nums, ans, res, target, 0, nums.size());
        
        return res;
        
    }
};
