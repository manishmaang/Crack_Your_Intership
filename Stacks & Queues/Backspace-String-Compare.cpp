//QUESTION => Given two strings s and t, return true if they are equal when both are typed into empty text editors. '#' means a backspace character.
// Note that after backspacing an empty text, the text will continue empty.
#include<bits/stdc++.h>
using namespace std;
 bool backspaceCompare(string s, string t) {
        stack <char> st;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != '#') st.push(s[i]);
            else{
                if(!st.empty())
                {
                    st.pop();
                }
            }
        }
        s = "";
        while(!st.empty())
        {
            char c = st.top();
            st.pop();
            s += c;
        }
        for(int i = 0; i < t.length(); i++)
        {
            if(t[i] != '#') st.push(t[i]);
            else{
                if(!st.empty())
                {
                    st.pop();
                }
            }
        }
        t = "";
        while(!st.empty())
        {
            char c = st.top();
            st.pop();
            t += c;
        }
        if(s == t) return true;
        else return false;
    }