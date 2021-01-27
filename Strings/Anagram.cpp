bool isAnagram(string a, string b){
    
    // Your code her
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    if(a.compare(b) == 0)
        return true;
    return false;
    
}
