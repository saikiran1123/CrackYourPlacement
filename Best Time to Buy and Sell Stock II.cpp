
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> line(n,0);
        for(int i=n-1;i>=0;i--){
            int maxi=0;
            for(int j=i+1;j<n;j++){
                if(j+1<n && prices[j]-prices[i]+line[j+1]>maxi) maxi=prices[j]-prices[i]+line[j+1];
                else if(prices[j]-prices[i]>maxi){
                    maxi=prices[j]-prices[i];
                }
            }
            if(i+1<n && maxi<line[i+1]) line[i]=line[i+1];
            else line[i]=maxi;
        }
        for(int i=0;i<n;i++) cout<<line[i]<<" ";
        return line[0];
    }
};