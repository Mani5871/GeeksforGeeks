#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void swap(char *x, char *y)
{
    char t = *x;
    *x = *y;
    *y = t;
}

int cnt;

void permute(string str, int l, int r)
{
    //cout << str << endl;
    if(l == r)
    {
        cout << str << " ";
        cnt ++;
    }
    
    for(int i = l; i <= r; i ++)
    {
        swap(str[i], str[l]);
        sort(str.begin() + l + 1, str.end());
        permute(str, l + 1, r);
        swap(str[i], str[l]);
    }
}

int main() {
	//code
	
	int t;
	cin >> t;
	while(t--)
	{
	    cnt = 0;
	    string str;
	    cin >> str;
	    sort(str.begin(), str.end());
	    permute(str, 0, str.size() - 1);
	    cout << endl;
	}
	return 0;
}
