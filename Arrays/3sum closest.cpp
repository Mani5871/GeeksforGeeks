// Time Complexity : O(N ^ 2)
// Space Complexity : O(1)
// https://practice.geeksforgeeks.org/problems/three-sum-closest/1/?track=md-arrays&batchId=144#

class Solution{
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        
        sort(arr.begin(), arr.end());
        
        int i, j, k, ele = INT_MAX, sum, n = arr.size(), diff = INT_MAX;
        
        for(i = 0; i < n - 1; i ++)
        {
            j = i + 1;
            k = n - 1;
            
            while(j < k)
            {
                sum = arr[i] + arr[j] + arr[k];
                if(sum == target)
                    return sum;
                if(sum > target)
                    k --;
                if(sum < target)
                    j ++;
                
                int diff1 = abs(sum - target);
            
                if(diff1 < diff)
                {
                    diff = diff1;
                    ele = sum;
                }
                
                if(diff == diff1)
                {
                    if(sum > ele)
                        ele = sum;
                }

            }
            
            int diff1 = abs(sum - target);
            
            if(diff1 < diff)
            {
                diff = diff1;
                ele = sum;
            }
            
            if(diff == diff1)
            {
                if(sum > ele)
                    ele = sum;
            }
            
        }
        return ele;
    }
};
