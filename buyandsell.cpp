class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit =0;
        int n = prices.size();
    //  for(int i =0; i < n-1; i++){
    //     for(int j =i+1; j < n;j++){
    //         maxprofit= max(maxprofit, prices[j] -prices[i]);
    //     }
    //  }
    int buy = prices[0];
    for(int i =1;i < n; i++){
        if(prices[i] < buy) buy = prices[i];
        maxprofit = max(maxprofit, prices[i] - buy);
    }
     return maxprofit;   
    }
};