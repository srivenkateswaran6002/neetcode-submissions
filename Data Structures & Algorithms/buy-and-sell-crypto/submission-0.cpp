class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = INT_MIN;
        for (int i = 0 ; i < prices.size() ; i++ ){
            for (int j = i ; j < prices.size() ; j++ ){
                if (prices[j] - prices[i] > diff) diff = prices[j] - prices[i];
            }
        }
        return diff;
    }
};
