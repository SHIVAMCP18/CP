class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minsofar = prices[0];
        int maxprofit = 0 , profit;
        for(int i = 0 ; i < prices.size() ; i++){
            minsofar = min(prices[i] , minsofar);
            profit = prices[i] - minsofar;
            maxprofit = max(maxprofit , profit);
        }
        return maxprofit;
    }
};