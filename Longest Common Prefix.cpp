class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str;
        int n=strs.size();
        int mini=200;
        for(int i=0;i<n;i++){
            if(strs[i].length()<mini) mini=strs[i].length();
        }
        int i;
        for(i=0;i<mini;i++){
            bool flag=true;
            char ch=strs[0][i];
            for(int j=1;j<n;j++){
                if(ch!=strs[j][i]){
                    flag=false;
                    break;
                }
            }
            if(flag==false)
                break;
        }
        return strs[0].substr(0,i);
    }
};