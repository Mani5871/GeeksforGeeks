// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    void sum(int ind, int sum1, vector<int>&arr, vector<int>&res, int n)
    {
        if (ind == n)
        {
            res.push_back(sum1);
            return;
        }
            
        sum(ind + 1, arr[ind] + sum1, arr, res, n);
        
        sum(ind + 1, sum1, arr, res, n);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        sum(0, 0, arr, ans, N);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
