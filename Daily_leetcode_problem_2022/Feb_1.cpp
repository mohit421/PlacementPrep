
//                                           Date:- 1 Feb, 2022
//                                              Day 2

/*
Problem---> 121. Best Time to Buy and Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day 
in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
Example 2:

Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 

Constraints:

1 <= prices.length <= 105
0 <= prices[i] <= 104
*/


/*
// Test cases passed:- 198/211

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0,profit=INT_MIN;
        for(int i=0;i<prices.size();i++){
            prices[buy] = prices[i];
            if(buy<=prices.size()){
                for(int sell=i+1;sell<prices.size();sell++){
                    profit = max(profit,(prices[sell]-prices[buy]));
                }   
            }
        }
        if(profit>=1){
            return profit;
        }
        return 0;
    }
};
*/

/*
// Test cases passed:- 198/211
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      	int maxProfit = 0 , tempMax = 0;
	  	for(int i = 0 ; i < prices.size() ; i++) {
	  		for(int j = i+1 ; j < prices.size() ; j++) {

	  			if(prices[j] - prices[i] <= 0) 
                    tempMax = 0;
	  			else {
	  				tempMax = prices[j] - prices[i];
	  				maxProfit = max(tempMax,maxProfit);
	  			}
	  		}
	  	}
	  	return maxProfit;  
    }
};
*/

// Optimized solution 

// code
/*
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = INT_MAX,profit=0;
        for(int i=0;i<prices.size();i++){
            mn = min(mn,prices[i]);
            profit = max(profit,prices[i]-mn);
        }
        return profit;
    }
};
*/