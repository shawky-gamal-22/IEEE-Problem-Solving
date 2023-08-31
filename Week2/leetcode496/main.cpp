class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> v ;
        int siz1 = nums1.size() ;
        int siz2 = nums2.size() ;
        for(int i = 0 ; i < siz1 ; i++){
            int str = -1 ;
            for(int j = 0 ; j < siz2 ; j++){
                if(nums1[i]==nums2[j]){
                    str= j ;
                    break ;
                }
            }
            if(str == siz2-1){
                v.push_back(-1) ;
            }
            else{
                bool check =false ;
                for(int s = str+1 ;s <siz2 ; s++){
                    if(nums2[s]>nums1[i]){
                        v.push_back(nums2[s]) ;
                        check = true ;
                        break ;
                    }
                }
                if(!check) v.push_back(-1) ;
            }
        }
        return v ;
    }
};
