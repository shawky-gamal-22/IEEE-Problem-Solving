class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0 ;
        if(s.size() == 1) return 1 ;
        for(int i = s.size()-1 ;i >= 0 ;i--){
            if(s[i] ==' ' && count >0) break ;
            else if(s[i] ==' ' && count ==0) continue ;
            else count++ ;
        }
        return count ;
    }
};
