//QUESTION => Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
#include<bits/stdc++.h>
using namespace std;
 int strStr(string haystack, string needle) {
        if(haystack.length() == 0 || needle.length() == 0) return -1;
        int nextIndex = 0;
        bool flag = false;
        for(int i = 0; i < haystack.length(); i++)
        {
            if(haystack[i] == needle[0])
            {
                int j = 0;
                int index = i;
                while(haystack[++index] == needle[++j] && j < needle.length())
                {
                    if(haystack[index] == needle[0] && !flag)
                    {
                       nextIndex = index;
                       flag = true;
                    }
                }
                //pura loop chl gya to hume needle mil gyi hai 
                if(j == needle.length()) return i;

                //beech me break hua hai to next valid index se dhundo;
                flag = false;
                if(nextIndex > i)
                {
                    i = nextIndex -1;
                }
            }
        }
        return -1;
    }