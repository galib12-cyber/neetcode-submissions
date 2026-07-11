class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int mn = 0;
        int mx = 0;
        int m = 0;
        for (int i = 0; i < prices.size() - 1; i++) {
            if (prices[i] < prices[i + 1]) {
                mx = *max_element(prices.begin() + i, prices.end());
                int r = mx - prices[i];
                m = max(r, m);
            }
        }

        return m;
    }
};
