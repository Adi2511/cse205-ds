class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i] == '*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string ans="";
        while(!st.empty()){
            char x = st.top();
            st.pop();
            ans+=x;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};