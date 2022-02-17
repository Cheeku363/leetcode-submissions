int strStr(string haystack, string needle) {
        
        int n1 = haystack.size();
        
        int n2 = needle.size();
        
        if(n2 == 0)
            return 0;
        
        if(haystack.find(needle) == string :: npos)
        {
            return -1;
        }
        
        else
            return haystack.find(needle);
    }