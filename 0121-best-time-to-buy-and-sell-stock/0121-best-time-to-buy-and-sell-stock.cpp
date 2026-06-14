class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int minprice=prices[0];
        int max_profit=0;
        for(int i=1;i<n;i++){
            int profit=prices[i]-minprice;
            if(profit>max_profit){
                max_profit=profit;
            }
            if(prices[i]<minprice){
                minprice=prices[i];
            }
        }
        return max_profit;
    }
};