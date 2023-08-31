class MyQueue {
private:
    std::stack<int>s1 ;
    std::stack<int>s2 ;
    int top ;
public:
    MyQueue() {
    }

    void push(int x) {
        if(s1.size()==0)top = x ;
        s1.push(x) ;
    }

    int pop() {

        int siz = s1.size() ;
        for(int i = 0 ; i < siz ; i++){
            int x = s1.top() ;
            s2.push(x) ;
            s1.pop();
        }
        int res = s2.top() ;
        s2.pop() ;
        int siz2 = s2.size() ;

        for(int i = 0 ; i < siz2 ; i++){
            int x = s2.top() ;
            if(s1.size()==0)top = x ;
            s1.push(x) ;
            s2.pop();
        }

        return res ;
    }

    int peek() {
        return top ;
    }

    bool empty() {
        return s1.empty() ;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
