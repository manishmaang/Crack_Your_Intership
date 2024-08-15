//Question => Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.
// You must solve this problem without using the library's sort function.

 

#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& a) 
{
    int start = 0;
    int end = a.size() -1;
    for(int i = 0; i <= end; i++)
    {
        if(a[i] == 0)
        {
            int temp = a[start];
            a[start] = 0;
            a[i] = temp;
            start++;
        }
        else if(a[i] == 2)
        {
            int temp = a[end];
            a[end] = 2;
            a[i] = temp;
            end--;
            i--; //to re-evaluate what came in place of 2 agr 0 aaya to start me bejna padega;
        }
    }
        
}