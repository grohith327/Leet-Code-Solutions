class MyStack {
public:
    
    queue<int> a, b;
    
    /** Initialize your data structure here. */
    MyStack() {
     
    }
    
    /** Push element x onto stack. */
    void push(int x) {
       a.push(x); 
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        while(a.size() > 1)
        {
            int item = a.front();
            a.pop();
            b.push(item);
            
        }
        
        int value = a.front();
        a.pop();
        
        while(b.size() > 0)
        {
            int item = b.front();
            b.pop();
            a.push(item);
        }
        
        return value;
    }
    
    /** Get the top element. */
    int top() {
        
        int value;
        
        while(a.size() > 0)
        {
            if(a.size() == 1)
                value = a.front();
            int item = a.front();
            a.pop();
            b.push(item);
            
        }
        
        while(b.size() > 0)
        {
            int item = b.front();
            b.pop();
            a.push(item);
        }
        
        return value;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        if(!a.empty())
            return false;
        return true;
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
