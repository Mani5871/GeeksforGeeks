#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int i, j, k, n;
    cin >> n; // Input for size of array
    
    int arr[n]; // Array declartion
    
    for(i = 0; i < n; i ++)
        cin >> arr[i]; // Array input
    
    
    int pos_max = INT_MIN, neg_max = INT_MAX, neg = 0, pos = 0;
    
    // Finding out highest positive number and least negative number
    
    for(i = 0; i < n; i ++)
    {
        if(arr[i] > pos_max)
            pos_max = arr[i];
            
        if(arr[i] < neg_max)
            neg_max = arr[i];
    }
    
    // Declaring 2 separate arrays to store the count of given positive and negative integers
    
    int pos_arr[pos_max + 1], neg_arr[abs(neg_max) + 1];
    
    for(i = 0; i < pos_max + 1; i ++)
        pos_arr[i] = neg_arr[i] = 0;
    
    // Finding number of negative and positive integers and finding their counts in respective array
    
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
    
    j = 0;
    i = 0;
    
    // placing negative numbers
    while(neg > 0)
    {
        if(neg_arr[i] > 0)
        {
            arr[j ++] = -1 * i;
            neg_arr[i] --;
            neg --;
        }
        else
            i ++;
    }
    
    // placing positive numbers
    i = 0;
    while(pos > 0)
    {
        if(pos_arr[i] > 0)
        {
            arr[j ++] = i;
            pos_arr[i] --;
            pos --;
        }
        else
            i ++;
    }
    
    for(i = 0; i < n; i ++)
        cout << arr[i] << endl;
}
