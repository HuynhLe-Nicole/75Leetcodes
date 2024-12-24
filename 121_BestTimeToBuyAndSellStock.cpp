#include <iostream>
#inlcude <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int maxProfit = 0; //This will hold the maximum profit
    int minPrice = INT_MAX; //Initialize minimum price to a very high value

    for (int price : prices) {
        //Update the minimum price if the current price is lower
        if (price < minPrice) {
            minPrice = price;
        }

        //Calculate profit if sold at the current price
        int profit = price - minPrice;

        //Update maximum profit if we found a new higher profit
        if (profit > maxProfit) {
            maxProfit = profit;
        }
    }

    return maxProfit; //Return the maximum profit found
}