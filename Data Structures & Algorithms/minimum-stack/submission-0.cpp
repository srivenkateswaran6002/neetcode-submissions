class MinStack {
    priority_queue<int , vector<int> , greater<int>>min_q;
    stack<int>s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        min_q.push(val);
        s.push(val);
    }
    
    void pop() {
        min_q.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min_q.top();
    }
};
