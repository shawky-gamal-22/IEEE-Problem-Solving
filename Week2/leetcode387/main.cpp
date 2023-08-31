class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> mp ;
        for(auto c : s){
            mp[c]++ ;
        }
        int siz = s.size() ;
        for(int i = 0 ; i < siz ; i++){
            if(mp[s[i]] ==1){
                return i ;
            }
        }
        return -1 ;
    }
};
