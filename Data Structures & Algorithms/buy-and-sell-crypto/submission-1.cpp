class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff = 0;
        int l = 0;
        for (int r = 0 ; r < prices.size() ; r++ ){
            if (prices[r] - prices[l] > diff) diff = prices[r] - prices[l];
            if (prices[r] < prices[l]) l = r;
        }
        return diff;
    }
};
