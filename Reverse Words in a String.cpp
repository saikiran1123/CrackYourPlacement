class Solution {
public:
    string reverseWords(string s) {
        vector<string> line;
        int n=s.length();
        int sidx=0,eidx=0;
        while(eidx<n){
            while(s[sidx]==' ') sidx++;
            eidx=sidx;
            while(eidx<n && s[eidx]!=' ') eidx++;
            if(sidx!=eidx)
            {
                string word=s.substr(sidx,eidx-sidx);
                line.push_back(word);
            }
            sidx=eidx;
        }
        string madhan="";
        for(int i=line.size()-1;i>=0;i--){
            cout<<"k"<<line[i]<<"k";
            madhan+=line[i]+" ";
        }
        madhan.pop_back();
        return madhan;
        
    }
};