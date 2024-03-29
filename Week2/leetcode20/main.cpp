class Solution {
public:
    bool isValid(string s) {
        stack <char> st;
        for(auto c : s){
            if(st.empty()) st.push(c) ;
            else{
                if(c== ')' && st.top()!='('){
                    st.push(c) ;
                }
                else if(c== ')' && st.top()=='(') st.pop() ;
                else if(c== '}' && st.top()!='{'){
                    st.push(c) ;
                }
                else if(c== '}' && st.top()=='{') st.pop() ;
                if(c== ']' && st.top()!='['){
                    st.push(c) ;
                }
                else if(c== ']' && st.top()=='[') st.pop() ;
                else if(c=='(' ||c=='{' ||c=='['  ) st.push(c) ;

            }
        }
        if(st.empty()) return true ;
        else return false ;
    }
};
