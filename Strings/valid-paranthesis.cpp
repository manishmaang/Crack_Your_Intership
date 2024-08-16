//Question => Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
// Every close bracket has a corresponding open bracket of the same type

#include <bits/stdc++.h>
using namespace std;

bool isValid(string str) 
{
    stack <char> s;
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
        s.push(str[i]);
        }
        else
        {
        if(s.empty() || (s.top() == '(' && str[i] != ')')) return false;
        else if(s.empty() || (s.top() == '[' && str[i] != ']')) return false;
        else if(s.empty() || (s.top() == '{' && str[i] != '}')) return false;

        if(!s.empty())s.pop();
        }
    } 
    if(s.empty()) return true;
    else return false;
}