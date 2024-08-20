//QUESTION =>


#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach
 vector<int> findDuplicates(vector<int>& nums) 
 {
        map<int,int> mp;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second > 1)
            {
                ans.push_back(it->first);
            }
        }
        return ans;
    }

//Imrpovised Approach
 vector<int> findDuplicates(vector<int>& nums) 
 {
        vector<int> ans;
        int countOut = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            int index = abs(nums[i]);
            if(index >= nums.size())
            {
                countOut++;
                if(countOut > 1) ans.push_back(index);
                continue;
            }
            if(nums[index] < 0)
            {
                ans.push_back(index);
            }
            nums[index] = nums[index]*-1;
        }
        return ans;
    }