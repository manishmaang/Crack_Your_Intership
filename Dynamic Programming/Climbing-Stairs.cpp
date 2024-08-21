//QUESTION => You are climbing a staircase. It takes n steps to reach the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include <bits/stdc++.h>
using namespace std;
 int countWays( vector<int> &dp,int n)
    {
      if(n == 1 || n == 2) return n;
      if(n < 0) return 0;

      if(dp[n] != -1) return dp[n];

      int a = countWays(dp, n-1);
      int b = countWays(dp, n-2);
      dp[n] = a+b;
      return dp[n]; 
    }
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        int count = 0;
        count = countWays(dp,n);
        return count;
    }