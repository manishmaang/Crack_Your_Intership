//Question => Given an array of integers nums containing n + 1 integers where each integer is in the range  [1, n] inclusive.There is only one repeated number in nums, return this repeated number.
// You must solve the problem without modifying the array nums and uses only constant extra space.

 


//Brute - Force Approach
#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());
    for(int i = 0; i < nums.size(); i++)
    {
        if(nums[i] == nums[i+1]) return nums[i];
    }
    return 0;
}

//Improvised Approach
int findDuplicate(vector<int>& nums) 
{
    unordered_map<int, int> mp;
    for(int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
        if(mp[nums[i]] > 1) return nums[i];
    }
    return 0;
}

// Better Approach
int findDuplicate(vector<int>& nums) 
{
    for(int i = 0; i < nums.size(); i++)
    {
        int index = abs(nums[i]);
        if(nums[index] < 0) 
        {
          return abs(index);
        }
        nums[index] = -1*nums[index];
    }
    return 0;
}