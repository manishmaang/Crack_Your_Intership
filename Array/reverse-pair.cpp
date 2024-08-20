//Question => Given an integer array nums, return the number of reverse pairs in the array.
// A reverse pair is a pair (i, j) where:
// 0 <= i < j < nums.length and
// nums[i] > 2 * nums[j].

#include <bits/stdc++.h>
using namespace std;
//Brute Force Approach
 
  int reversePairs(vector<int>& nums) 
    {
        int count = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] > 2*nums[j])
                {
                    count++;
                }
            }
        }
        return count;
    }

//Better Appraoch
