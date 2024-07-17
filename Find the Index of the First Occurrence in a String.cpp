class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.length();
        int k=haystack.length();
        for(int i=0;i<=k-n;i++){
            if(needle==haystack.substr(i,n)){
                return i;
                break;
            }
        }
        return -1;
    }
};