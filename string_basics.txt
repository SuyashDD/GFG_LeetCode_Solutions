### transform single char to lowercase or uppercase

string s = "ABCADdssf";
for(auto c: s)
{
  c = tolower(c); // need to assign the result 
  c = toupper(c);
}


### Transform whole string to lowercase or uppercase
string s = "ABSDA";

transform(s.begin() , s.end() , s.begin() , :: tolower);
transform(s.begin() , s.end() , s.begin() , :: toupper);

