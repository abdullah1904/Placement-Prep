#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int left = 0, right = 1, maxProfit = 0;
    while (right < prices.size()) {
        if(prices[left] < prices[right]){
            int profit = prices[right] - prices[left];
            maxProfit = max(maxProfit, profit);
        } 
        else {
            left = right;
        }
        right++;
    }
    return maxProfit;
}


int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}