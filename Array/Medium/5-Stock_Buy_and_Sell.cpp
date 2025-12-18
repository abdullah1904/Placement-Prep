#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = prices[0], maxProfit = 0;
    for (int i = 1; i < prices.size(); i++) {
        int cost = prices[i] - minPrice;
        if (cost > maxProfit) {
            maxProfit = cost;
        }
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }
    return maxProfit;      
}


int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}