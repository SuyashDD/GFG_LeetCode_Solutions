bool isSubSequence(string p, string s)
    {
        if(p.length() > s.length())
        {
            return false;
        }
        
        if(p.empty())
            return true;
        
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] == p[0])
            {
                int j = i + 1 ;
                int pt = 1;
                while(j < s.length() && pt < p.length())
                {
                    if(s[j] != p[pt])
                    {
                        j++;
                    }
                    else
                    {
                        pt++;
                        j++;
                    }
                }
                if(j <= s.length() && pt == p.length())
                {
                if(s[j - 1] == p[p.length() - 1])
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        return false;
    }

// Optimized Function
bool check(string &s1 , string &s2)
{
    int s1l = s1.length();
    int s2l = s2.length();
    if(s1l < s2l)
        return false;
    int j = 0 ;
    for(int i = 0 ; i < s1l ; i++)
    {
        if(s1[i] == s2[j])
        {
            j++;
        }
    }
    if(j == s2l)
        return true;
    return false;
}


// Recursive solution
bool recursiveCheck(string s1 , string s2 , int m , int n)
{
    if(n == 0)
        return true;
    if(m == 0)
        return false;
    if(s1[m-1] == s2[n-1])
    {
        return recursiveCheck(s1 , s2 , m - 1 , n - 1);
    }
    else
    {
        return recursiveCheck(s1 , s2 , m-1 , n);
    }
    
}
