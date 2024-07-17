class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> line;
        int i=0,j=0,count=0,sum=0,n=s.length();
        for(int i=0;i<n;i++){
            line[s[i]]++;
            if(count<line[s[i]]) count=line[s[i]];
            if((i-j+1)>count+k){
                line[s[j]]--;
                j++;
            }
            else{
                if(sum<i-j+1) sum=i-j+1;
            }
        }
        return sum;
    }
};