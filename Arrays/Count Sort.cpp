#include <iostream>
#include <bits/stdc++.h>
#include <chrono>
using namespace std;
using namespace std::chrono;
typedef long long int lli;
vector<lli> pos_arr, neg_arr, output;

int main() {
    lli i, j, k, n = 10000000, cnt = 0; //10000000
    
    vector<lli> arr;
    
    for(i = 0; i < n; i ++)
    {
        arr.push_back(rand() % n);
        output.push_back(0);
    }
    
    for(i = 1; i < arr.size(); i ++)
        if(arr[i] < arr[i - 1])
            cnt ++;
    
    cout << "Total anomalies before sorting " << cnt << endl;
    
    auto start = high_resolution_clock::now();
    
    lli pos_max = INT_MIN, neg_max = INT_MAX, neg = 0, pos = 0;
    
    // Finding out highest positive number and least negative number
    
    for(i = 0; i < n; i ++)
    {
        if(arr[i] > pos_max)
            pos_max = arr[i];
            
        if(arr[i] < neg_max)
            neg_max = arr[i];
    }
    
    for(i = 0; i < pos_max + 1; i ++)
        pos_arr.push_back(0);
        
    for(i = 0; i < neg_max; i ++)
        neg_arr.push_back(0);
        
    for(i = 0; i < n; i ++)
    {
        if(arr[i] < 0)
        {
            neg_arr[abs(arr[i])] ++;
            neg ++;
        }
        
        else
        {
            pos_arr[arr[i]] ++;
            pos ++;
        }
    }
    
    for(i = 1; i < pos_max + 1; i ++)
        pos_arr[i] += pos_arr[i - 1];
        
    for(i = n - 1; i >= 0; i --)
    {
        output[pos_arr[arr[i]]] = arr[i];
        pos_arr[i] --;
    }
    
    for(i = 0; i != output.size(); i ++)
        arr[i] = output[i];
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << duration.count() << endl;
    
}
