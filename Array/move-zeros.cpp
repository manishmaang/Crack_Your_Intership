//QUESTION => Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note that you must do this in-place without making a copy of the array.

#include <bits/stdc++.h>
using namespace std;
 void moveZeroes(vector<int>& nums) 
 {
        int count0 = 0;
        int start = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                count0++;
            }
            else
            {
                nums[++start] = nums[i];
            }
        }
        while(count0 != 0)
        {
            nums[++start] = 0;
            count0--;
        }
    }