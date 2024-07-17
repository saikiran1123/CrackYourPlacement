class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1,j=b.length()-1;
        char ch=0;
        string str="";
        while(i>=0 || j>=0){
            int s=ch;
            if(i>=0){
                s+=a[i]-'0';
                i--;
            }
            if(j>=0){
                s+=b[j]-'0';
                j--;
            }
            if(s==0){
                str+='0';
                ch=0;
            }
            else if(s==1){
                str+='1';
                ch=0;
            }
            else if(s==2){
                str+='0';
                ch=1;
            }
            else if(s==3){
                str+='1';
                ch=1;
            }
        }
        if(ch==1) str+='1';
        reverse(str.begin(),str.end());
        return str;
    }
};