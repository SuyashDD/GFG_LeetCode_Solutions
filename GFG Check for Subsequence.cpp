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
