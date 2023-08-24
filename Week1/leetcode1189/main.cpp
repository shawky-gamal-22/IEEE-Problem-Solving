class Solution {
public:
    int maxNumberOfBalloons(string text) {
        map<char , int> mp ;
        for(auto c : text) {
            mp[c]++ ;
        }
        int min1 = min(mp['b'],min(mp['a'],mp['n'])) ;
        int min2 = min(mp['l'],mp['o']) ;
        min2 = round(min2/2) ;
        return min (min1,min2) ;
        }
};
