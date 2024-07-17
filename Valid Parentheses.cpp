class Solution {
public:
    bool isValid(string s) {
        int n=s.length();
        stack<char> line;
        int i=0;
        while(i<n){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                line.push(s[i]);
            }
            else if(line.empty()!=true && line.top()=='(' && s[i]==')') line.pop();
            else if(line.empty()!=true && line.top()=='{' && s[i]=='}') line.pop();
            else if(line.empty()!=true && line.top()=='[' && s[i]==']') line.pop();
            else line.push(s[i]);
            i++;
        }

        if(line.empty()==true) return true;
        else return false;
    }
};