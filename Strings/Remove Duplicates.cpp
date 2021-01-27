string removeDups(string s) 
	{
	    // Your code goes here
	    
	    int i, j, k;
	    unordered_map <char, bool> map1;
	    
	    string str;
	    
	    for(i = 0; i != s.size(); i ++)
	    {
	        if(map1.find(s[i]) == map1.end() || map1[s[i]] == false)
	        {
	            str += s[i];
	            map1[s[i]] = true;
	        }
	    }
	    return str;
	}
