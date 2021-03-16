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
            if(sum - arr[j] >= 0)
            {
                ans.push_back(arr[j]);
                comb(arr, ans, res, sum - arr[j], j, n);
                ans.pop_back();
            }
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<vector<int>> res;
        vector<int> ans;
        
        comb(nums, ans, res, target, 0, nums.size());
        
        return res;
        
    }
};
