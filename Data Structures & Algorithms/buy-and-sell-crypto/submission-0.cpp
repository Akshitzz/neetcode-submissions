class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        int maxprofit=0;
        int miniprice =prices[0];
        int profit =0;
        for(int i =1;i<n;i++){
            miniprice =min(miniprice,prices[i-1]);
            profit = prices[i]-miniprice;
            maxprofit=max(profit,maxprofit);
        }
        return maxprofit;
    }
};
