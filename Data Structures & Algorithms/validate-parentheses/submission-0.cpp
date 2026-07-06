class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        int ind =0;
        while( ind<s.size()){
            if( s[ind]=='(' || s[ind]=='{' || s[ind]=='[') st.push( s[ind]);
            else if( s[ind]==')'){
                if(!st.empty() && st.top()=='(') st.pop();
                else return false;
            }
            else if( s[ind]==']'){
                if(!st.empty() && st.top()=='[') st.pop();
                else return false;
            }
            else if( s[ind]=='}'){
                if(!st.empty() && st.top()=='{') st.pop();
                else return false;
            }
            ind++;
        }
        return st.empty();
        
    }
};
