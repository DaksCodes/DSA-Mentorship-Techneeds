class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprof=0;
        for(int i=0; i<prices.size();i++)
        {
            int profit=0;
            for(int j=i;j<prices.size();j++)
            {
                if(prices[j]<=prices[i])
                {
                    continue;
                }
                profit=prices[j]-prices[i];
                if(profit>maxprof)
                {
                    maxprof=profit;
                }
            }
        }
        return maxprof;
    }
};
