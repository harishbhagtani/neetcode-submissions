class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int len = prices.size();
        for(int i = 0;i < len;i++){
            int todayPrice = prices[i];
            int maxPrice = todayPrice;
            for(int j = i + 1;j < len;j++){
                int currPrice = prices[j];
                if(currPrice > maxPrice){
                    maxPrice = currPrice;
                }
            }
            int currProfit =  maxPrice - todayPrice;
            if(currProfit > profit){
                profit = currProfit;
            }
        }
        return profit;
    }
};
