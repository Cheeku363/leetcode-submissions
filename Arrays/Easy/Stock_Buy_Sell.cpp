 int maxProfit(vector<int>& prices) {
        int maxPro = 0;
        int minPrice = INT_MAX; // set Maximum Integer value
        for(int i = 0; i < prices.size(); ++i){
            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i] - minPrice); // calculate max profit so far.
        }
        return maxPro;
    }