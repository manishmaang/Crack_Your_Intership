//QUESTION => You are given a string s and an integer k. You can choose any character of the string and change it to any other uppercase English character. You can perform this operation at most k times.
// Return the length of the longest substring containing the same letter you can get after performing the above operations.

#include <bits/stdc++.h>
using namespace std;

 int characterReplacement(string s, int k) 
    {
       vector<int> v(26,0);
       int maxlen = 0;
       int start = 0;
       int end = 0;
       int maxfreq = 0;
       while(end < s.length())
       {
         char c = s[end];
         v[c-'A']++;
         maxfreq = max(maxfreq,v[c-'A']);

         int changes = (end-start+1) - maxfreq;
         if(changes <= k)
         {
            int length = end-start+1;
            maxlen = max(maxlen,length);
         }
         else
         {
           while(changes > k)
           {
             char c = s[start];
             v[c-'A']--;
             start++;
             maxfreq = 0;
             for(int i = 0; i < 26; i++)
             {
                maxfreq = max(maxfreq,v[i]);
             }
             changes = (end-start+1) - maxfreq;
           }
           maxlen = (end-start+1,maxlen);  
         }
         end++;
       }
       return maxlen;
    }