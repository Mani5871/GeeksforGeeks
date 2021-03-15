class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        unordered_map<int, bool>map1;
        
        int i, j, k;
                
        vector<vector<int>> res;
        

        
        sort(nums.begin(), nums.end());
        
        for(i = 0; i < nums.size(); i ++)
        {
            if(map1[nums[i]])
                continue;
            map1[nums[i]] = true;
            
            j = i + 1;
            k = nums.size() - 1;
            
            while(j < k)
            {
                int a, b, c;
                a = nums[i];
                b = nums[j];
                c = nums[k];
                
                if(a + b + c == 0)
                {
                    res.push_back({a, b, c});
                    j ++;
                    k --;
                }
                
                else if(a + b + c < 0)
                    j ++;
                
                else
                    k --;
            }
        }
        for(i = 0; i < res.size(); i ++)
            sort(res[i].begin(), res[i].end());
        
        
        vector<vector<int>> res1;
        map<vector<int>, bool>map2;
        
        for(i = 0; i < res.size(); i ++)
        {
            if(map2[res[i]])
                continue;
            map2[res[i]] = true;
            
            res1.push_back(res[i]);
        }
        
        return res1;
        
    }
};
