class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s ;
        int sum = 0;
        for(auto c : operations){
            if(c == "C"){
                int x = s.top() ;
                s.pop() ;
                sum-=x ;
            }
            else if(c=="D"){
                int x = s.top() ;
                s.push(x*2) ;
                sum+=(x*2) ;
            }
            else if(c == "+"){
                int t1 = s.top() ;
                s.pop() ;
                int t2 = s.top() ;
                int res = t1 + t2 ;
                s.push(t1) ;
                s.push(res) ;
                sum+=res ;
            }
            else {
                int x =stoi(c) ;
                s.push(x) ;
                sum+=x ;
            }

        }
        return sum ;
    }
};
