class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int key) {
        
        vector<int>nums1, ans;
        
        for(int i = 0; i < nums.size(); i ++)
            nums1.push_back(nums[i]);
        
        sort(nums1.begin(), nums1.end());
        
        int a, b, low = 0, high = nums.size() - 1;
        
        while(low < high)
        {
            if(nums1[low] + nums1[high] == key)
            {
                a = nums1[low];
                b = nums1[high];
                break;
            }
            
            else if(nums1[low] + nums1[high] < key)
                low ++;
            
            else
                high --;
        }
        
        for(int i = 0; i < nums.size(); i ++)
        {
            if(nums[i] == a || nums[i] == b)
                ans.push_back(i);
        }
        
        return ans;
        
    }
};
