class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int i, j, k, n = nums.size(), cnt = 0, ans = 0;
        
        for(i = 0; i < n; i ++)
        {
            if(nums[i])
                cnt ++;
            else
            {
                if(ans < cnt)
                    ans = cnt;
                cnt = 0;
            }
        }
        if(ans < cnt)
            ans = cnt;
        return ans;
    }
};
