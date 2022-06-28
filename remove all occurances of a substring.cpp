// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

bool verify(stack<int> stck ,string part)
{
    int stack_size = stck.size();
    int j = part.length() - 1;
    
    while(j >= 0 && part[j] == stck.top())
    {
        stck.pop();
        j--;
    }
    return j == -1;
    
}

string removeOccurrences(string s, string part) {
        stack<int> stck;
        for(int i = 0 ; i < s.length() ; i++)
        {
            stck.push(s[i]);
            if(stck.size() >= part.length())
            {
                if(verify(stck , part))
                {
                    int n = part.length();
                    while(n--)
                    {
                        stck.pop();
                    }
                }
            }
        }
        
        string result = "";
        while(!stck.empty())
        {
            result += stck.top();
            stck.pop();
        }
        reverse(result.begin() , result.end());
        return result;
    }

int main() {
    // Write C++ code here
    string str = "daabcbaabcbc";
    string part = "abc";
    cout<< removeOccurrences(str , part) << endl;
    // std::cout << "Enter";
    // cin >> str;
    // cout<<str;

    return 0;
}


// Solution 2 -
// class Solution {
// public:
//     string removeOccurrences(string s, string part) {
//         auto pos = s.find(part);
//         while(pos != -1){         
//         s.erase(pos, part.size());
//         pos = s.find(part);
//         }
//         return s;
//     }
// };
