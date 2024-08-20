// QUESTION => Given two binary strings a and b, return their sum as a binary string.
#include <bits/stdc++.h>
using namespace std;
 string addBinary(string a, string b) 
    {
        int carry = 0;
        // 1 + 1 = 0 carry = 1
        // 1 + 0 = 0 carry = 0
        int a1 = a.length() -1;
        int b2 = b.length() -1;
        string ans = "";
        while(a1 >= 0 && b2 >= 0)
        {
            int first = a[a1] - '0';
            int second = b[b2] - '0';
            int sum = first+second+carry;
            if(sum == 3)
            {
                ans += "1";
                carry = 1;
            }
            else if(sum == 2)
            {
                ans += "0";
                carry = 1;
            }
            else{
               if(sum == 1) ans += "1";
               else ans += "0";
               carry = 0;
            }
            a1--;
            b2--;
        }
        while(a1 >= 0)
        {
            int sum = carry + (a[a1] - '0');
            if(sum == 2) 
            {
                carry = 1;
                ans += "0";
            }
            else{
              if (sum == 1) ans += "1";
              else ans += "0";
              carry = 0;
            }
            a1--;
        }
        while(b2 >= 0)
        {
            int sum = carry + (b[b2] - '0');
            if(sum == 2)
            {
                carry = 1;
                ans += "0";
            }
            else{
              if (sum == 1) ans += "1";
              else ans += "0";
              carry = 0;
            }
            b2--;
        }
        if(carry == 1) ans += "1";

        for(int i = 0, j = ans.length()-1; i < j; i++,j--)
        {
            char c = ans[i];
            ans[i] = ans[j];
            ans[j] = c;
        }
        return ans;
    }