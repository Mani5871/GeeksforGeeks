class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i, j, k = 0, n = nums.size();
        
        i = 0;
        j = i + 1;
        
        while(j < n)
        {
            if(nums[j] == nums[i])
            {
                k ++;
            }
            else
            {
                swap(nums[i + 1], nums[j]);
                i ++;
            }
            j ++;
        }
        return n - k;
        
    }
};
