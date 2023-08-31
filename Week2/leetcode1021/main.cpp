class Solution {
public:
    string removeOuterParentheses(string s) {

    int counter1 = 0 ;
    int siz = s.size();
    for(int i = 0 ; i <siz ; i++){
        if(s[i]=='('){
            if(counter1 ==0){
            counter1 ++ ;
            s[i]='_' ;
           }
           else counter1 ++ ;
        }
        else if(s[i]==')'){
            if(counter1 >1)counter1-- ;
            else{
                s[i]='_' ;
                counter1-- ;
            }
        }
    }
    string res ="" ;
    for(auto c : s){
        if(c != '_') res+=c ;
    }
    return res ;
    }
};
