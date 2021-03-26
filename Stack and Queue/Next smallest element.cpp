class Solution {
public:
    vector<int> finalPrices(vector<int>& nums) {
        
        int i, j, k, n = nums.size();
        
        int ans[n];
        stack<int>ind;
        
        for(i = 0; i < n; i ++)
            ans[i] = nums[i];
        
        for(i = 0; i < n; i ++)
        {
            while(!ind.empty() && nums[ind.top()] >= nums[i])
            {
                ans[ind.top()] -= nums[i];
                ind.pop();
            }
            
            ind.push(i);
        }
        
        vector<int> res;
        
        for(i = 0; i < n; i ++)
            res.push_back(ans[i]);
        return res;
        
        
    }
};
