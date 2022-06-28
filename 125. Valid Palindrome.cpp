class Solution {
public:
    char toLowerCase(char ch){
        if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9'){
            return ch;
        }
        else{
            return (ch - 'A' + 'a');
        }
    }
    
    bool isValidCharacter(char ch){
        if(ch >= 'a' && ch <= 'z' || ch >= '0' && ch <= '9' || ch >= 'A' && ch <='Z'){
            return true;
        }
        else{
            return false;
        }
    }
    
    bool isPalindrome(string s) {
        if(s.empty()){
            return true;
        }
        
        int begin = 0;
        int end = s.length() - 1;
        
        while(begin <= end)
        {
            if( !( isValidCharacter(s[begin]) ))
                    begin++;
            
            else if( !( isValidCharacter(s[end]) ))
                    end--;

            else if( toLowerCase(s[begin]) != toLowerCase(s[end]) ) // we can directly use inbuilt tolower() string library function
                return false;
            
            else{
                begin++;
                end--;
                }
        }
        return true;
    }
};
