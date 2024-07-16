class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int i=0,j=0,start=1,m=matrix.size(),n=matrix[0].size(),minr=0,maxr=m-1,minc=0,maxc=n-1;
        vector<int> line;
        while(start<=m*n){
            if(i==minr && j==minc){
                for(j=minc;j<=maxc;j++){
                    line.push_back(matrix[i][j]);
                    start++;
                }
                j--;
                minr++;
                i++;
            }
            else if(i==minr && j==maxc){
                for(int i=minr;i<=maxr;i++){
                    line.push_back(matrix[i][j]);
                    start++;
                }
                i=maxr;
                j--;
                maxc--;
            }
            else if(i==maxr && j==maxc){
                for(int j=maxc;j>=minc;j--){
                    line.push_back(matrix[i][j]);
                    start++;
                }
                j=minc;
                maxr--;
                i--;
            }
            else if(i==maxr && j==minc){
                for(int i=maxr;i>=minr;i--){
                    line.push_back(matrix[i][j]);
                    start++;
                }
                minc++;
                i=minr;
                j++;
            }
            
        }
        return line;
    }
};