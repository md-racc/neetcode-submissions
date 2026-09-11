class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit{0};
        for (int i{0}; i < prices.size(); i++){
            for (int k{i}; k < prices.size(); k++){
                int profit{prices[k] - prices[i]};
                if (profit > maxProfit) maxProfit = profit;
            }
        }
        if (maxProfit > 0) return maxProfit;
        else return 0;
    }
};
