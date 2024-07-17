class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> line;
        line.push_back(0);
        for(int i=1;i<=n;i++){
            if(i%2==0) line.push_back(line[i/2]);
            else line.push_back(line[i/2]+1);
        }
        return line;
    }
};