class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int mini=INT_MAX;
                if(i==0 && j==0) mini=0;
                if(j>0 && mini>(grid[i][j-1])) mini=grid[i][j-1];
                if(i>0 && mini>(grid[i-1][j])) mini=grid[i-1][j];
                grid[i][j]=mini+grid[i][j];
            }
        }
        return grid[n-1][m-1];
    }
};