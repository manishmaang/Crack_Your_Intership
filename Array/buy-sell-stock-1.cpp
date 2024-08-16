//QUESTION => You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
#include <bits/stdc++.h>
using namespace std;

  int maxProfit(vector<int>& prices) 
  {
        int maxProfit = 0;
        
        int buyPrice = prices[0];
        int sellPrice = prices[0];

        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] < buyPrice)
            {
                int curProfit = sellPrice - buyPrice;
                maxProfit = max(maxProfit, curProfit);
                buyPrice = prices[i];
                sellPrice = prices[i];
            }
            if(prices[i] > sellPrice)
            {
                sellPrice = prices[i];
                int curProfit = sellPrice - buyPrice;
                maxProfit = max(curProfit, maxProfit);
            }
        }
        return maxProfit;
    }