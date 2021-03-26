class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        
        stack<int>ind;
        
        if(nums.size() == 0)
        {
            vector<int>ans;
            return ans;
        }
        
        int i, j, k, n = nums.size();
        
        int res[n];
        
        for(i = 0; i < n; i ++)
            res[i] = -1;
        
        for(i = 0; i < n * 2; i ++)
        {
            while(!ind.empty() && nums[ind.top()] < nums[i % n])
            {
                res[ind.top()] = nums[i % n];
                ind.pop();
            }
            
            if(i < n)
                ind.push(i);
        }
        
        vector<int> ans;
        
        for(i = 0; i < n; i ++)
            ans.push_back(res[i]);
        
        return ans;
        
    }
};
