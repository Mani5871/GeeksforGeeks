int strstr(string s, string x)
{
     //Your code here
     int n = s.size(), r = x.size();
     
     int cnt = 0, ind, i, j, index;
     
     for(i = 0; i != s.size(); i ++)
     {
         if(s[i] == x[index ++])
         {
            cnt ++;
            if(cnt == 1)
                ind = i;
         }
        
        else
        {
            cnt = 0;
            ind = i;
            index = 0;
            
        }

        if(cnt == x.size())
            return ind;
     }
     return -1;
}
