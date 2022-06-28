### 1. Transform single char to lowercase or uppercase

''' c++
string s = "ABCADdssf";
for(auto c: s)
{
  c = tolower(c); // need to assign the result 
  c = toupper(c);
}
'''

### 2. Transform whole string to lowercase or uppercase
string s = "ABSDA";

transform(s.begin() , s.end() , s.begin() , :: tolower);
transform(s.begin() , s.end() , s.begin() , :: toupper);

### 3. C++ subsequence vs substring
substring - a substring must be contiguos characters in a string
eg. string = "ABC"
--> substings = {"", A , B , AB , BC , ABC}

subsequence - a subsequence is a subset of string but the characters must be in the same sequence as present in parent string
e.g string = "ABC"
--> subsequence = {"" , A , B , C , AB , BC , AC , ABC }
Note here -> AC is a subsequence but not a substring
Also note that -> CA CB BA CBA are neither substrings nor subsequences
