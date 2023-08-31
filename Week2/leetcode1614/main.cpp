class Solution {
public:
    int maxDepth(string s) {
        int counter=0, maxcounter =0 ;
        for(auto c : s){
            if(c == '('){
                counter ++ ;
                maxcounter=max(counter,maxcounter) ;
            }
            else if(c==')'){
                counter -- ;
            }
        }
        return maxcounter ;
    }
};
