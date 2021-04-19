class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i = 0; i < prices.size(); i++){
            int j = i + 1;
            for(; j < prices.size(); j++){
                if(prices[j] <= prices[i]) break;
            }
            if(j == prices.size())continue;
            prices[i] -= prices[j];
        }
        return prices;
    }
};