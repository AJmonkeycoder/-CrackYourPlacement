class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int mx = INT_MIN;

        for(int i=0; i<prices.size(); i++){
            mini = min(prices[i], mini);
            int profit = prices[i] - mini;
            mx=max(mx, profit);
        }
        return mx;
    }
};
