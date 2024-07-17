class Solution {
public:
    int climbStairs(int n) {
        vector<int> line;
        line.push_back(0);
        line.push_back(1);
        line.push_back(2);
        for(int i=3;i<=n;i++){
            line.push_back(line[i-1]+line[i-2]);
        }

        return line[n];   
    }
};