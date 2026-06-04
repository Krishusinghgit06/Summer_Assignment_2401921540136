class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size(), i=1;
        int profit=0, maxprofit=0;
        int min = prices[0];
        while(i<n){
            if(min>prices[i]){
                min=prices[i];
            }
            else{
                profit=prices[i]-min;
                maxprofit = max(profit,maxprofit);
            }
            i++;
        }
        return maxprofit;
    }
};
