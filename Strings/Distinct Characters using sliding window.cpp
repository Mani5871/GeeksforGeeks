#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	
	int t;
	cin >> t;
	while(t--)
	{
	
    	string str;
    	cin  >> str;
    	
    	int i, j, k, cnt = 0, max = 0;
    	unordered_map<char, bool> map1;
    	
    	for(i = 0; i < str.size(); i ++)
    	{
    	    cnt = 0;
    	    map1.clear();
    	    for(j = i; j < str.size(); j ++)
    	    {
    	        
    	        if(map1.find(str[j]) != map1.end())
    	            break;
    	        
    	        map1[str[j]] = true;
    	        cnt ++;
    	        
    	    }
    	    if(cnt > max)
    	        max = cnt;
    	}
    	cout << max << endl;
	}
	return 0;
}
