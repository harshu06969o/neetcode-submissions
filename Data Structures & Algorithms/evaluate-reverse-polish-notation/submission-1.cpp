class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         int ind =0;
        stack<int>st;
         while ( ind < tokens.size()){
          if( st.size()>=2 && tokens[ind]=="+"){
            int firstnum = st.top();
            st.pop();
            int secondnum= st.top();
            st.pop();
            st.push( secondnum+firstnum);

          }
          else if( st.size()>=2 && tokens[ind]=="*"){
            int firstnum = st.top();
            st.pop();
            int secondnum= st.top();
            st.pop();
            st.push( secondnum*firstnum);

          }
           else if( st.size()>=2 && tokens[ind]=="/"){
            int firstnum = st.top();
            st.pop();
            int secondnum= st.top();
            st.pop();
            st.push( secondnum/firstnum);

          }
          else if( st.size()>=2 && tokens[ind]=="-"){
            int firstnum = st.top();
            st.pop();
            int secondnum= st.top();
            st.pop();
            st.push( secondnum-firstnum);

          }
          else st.push( stoi(tokens[ind]));
          ind++;

         }
          return st.top();
    }
};
