class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        if(s[0]==')'||s[0]==']'||s[0]=='}')
            return false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='('||s[i]=='['||s[i]=='{')
                str.push(s[i]);
           else if(str.size()){
                char c=str.top();
                if(c=='(' && s[i]!=')')
                    return false;
                else if(c=='[' && s[i]!=']')
                    return false;
                else if(c=='{' && s[i]!='}')
                    return false;
                str.pop();
                
            }
            else
                return false;
            //cout<<st.top();
        }
        if(!str.empty())
            return false;
        return true;
    }
};