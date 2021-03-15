// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

bool compare(vector<int>&v1, vector<int>&v2)
{
    return v1[1] < v2[1];
}

class Solution{
    public:
        int maxMeetings(int start[], int end[], int n) {
        // Your code here
        
        vector<vector<int>> ans;
        
        int i, j, k;
        
        for(i = 0; i < n; i ++)
            ans.push_back({start[i], end[i]});
        
        sort(ans.begin(), ans.end(), compare);
        
        int res = 0, cnt = 0;
        
        for(i = 0; i < ans.size(); i ++)
        {
            if(ans[i][0] > res)
            {
                res = ans[i][1];
                cnt ++;
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
