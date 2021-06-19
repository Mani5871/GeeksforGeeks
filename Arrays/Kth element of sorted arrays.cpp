// Time Complexity : O(NlogN)
// Space Complexity : O(N)

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector <int> arr;
        
        for(int i = 0; i < n; i ++)
            arr.push_back(arr1[i]);
            
        for(int i = 0; i < m; i ++)
            arr.push_back(arr2[i]);
            
        
        sort(arr.begin(), arr.end());
        
        int cnt = 0, ele;
        
        for(auto it : arr)
        {
            ele = it;
            cnt ++;
            // cout << ele << endl;
            
            if(cnt == k)
                break;
        }
        return ele;
    }
};
