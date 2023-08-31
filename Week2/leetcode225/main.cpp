class MyStack {
private:
    std::queue<int> q1;
    std::queue<int> q2;
public:
    MyStack() {
    }

    void push(int x) {
        q1.push(x) ;
    }

    int pop() {
        queue<int>empty ;
        int res = (q1.back()) ;
        int siz = q1.size() ;
        for(int i = 0 ; i<siz-1 ; i++){
            int e = q1.front() ;
            q2.push(e) ;
            q1.pop() ;
        }
        q1 = empty ;
        int siz2 = q2.size() ;
        for(int i = 0 ; i<siz2 ; i++){
            int e = q2.front() ;
            q1.push(e) ;
            q2.pop() ;
        }
        return res ;
    }

    int top() {
        return (q1.back()) ;
    }

    bool empty() {
        return q1.empty() ;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
