class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int max=0;
        for(int i=0;i<prices.size();i++)
        {
            if(min>prices[i])
            min=prices[i];
            if(prices[i]-min>max)
            max=prices[i]-min;
            
        }
        return max;
    }

};