class RecentCounter {
private:
    vector<int> time;
public:
    RecentCounter() {
        int counter = 0 ;

    }

    int ping(int t) {
        int min = t-3000 ;
        time.push_back(t) ;
        int counter = 0 ;
        for(int i = 0 ; i<time.size();i++){
            if(time[i] >= min){
                counter = i ;
                break ;
            }
        }
        int res = time.size()-counter ;
        return res;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
