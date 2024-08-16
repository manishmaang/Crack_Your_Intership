//QUESTION => The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.
// You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.
// For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.
// Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.


#include <bits/stdc++.h>
using namespace std;
//BRUTE FORCE APPROACH 
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        stack <int> st;
        vector<int> nGrtr;
        st.push(-1);
        for(int i = nums2.size()-1; i >= 0; i--)
        {
          while(st.top() != -1 && st.top() <= nums2[i])
          {
            st.pop();
          }
          nGrtr.push_back(st.top());
          st.push(nums2[i]);
        }

        for(int i = 0; i < nums1.size(); i++)
        {
            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                {
                    nums1[i] = nGrtr[(nums2.size()-1)-j];
                }
            }
        }
        return nums1;
    }