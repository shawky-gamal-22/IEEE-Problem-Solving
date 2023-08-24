class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int siz = nums.size() ;
        vector<int> v(siz+1) ;
        for(auto i : nums) {
            v[i]++ ;
        }
        vector<int>ans ;
        for(int i = 1 ;i < siz+1; i++){
            if(v[i] == 0){
                ans.push_back(i) ;
            }
        }
        return ans ;
    }
};
