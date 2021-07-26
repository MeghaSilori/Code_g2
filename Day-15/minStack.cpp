class MinStack {
public:
    /** initialize your data structure here. */
    stack<long> s; 
    long minele; 
    long val;
    MinStack() {
        //do nothing
    } 
    void push(int x) {
        val = long(x);
        if (s.empty()) { 
            minele = val; 
            s.push(val); 
        }  
        else {
            if (val < minele) { 
                s.push(2*val - minele); 
                minele = val; 
            } 
            else
                s.push(val);
        }
    }
    
    void pop() {
        if (!s.empty()){
            long t = s.top(); 
            s.pop();  
            if (t < minele) 
                minele = 2*minele - t; 
        }
    }
    
    int top() {
        if (s.empty()) 
            return NULL; 
        long t = s.top();   
        if(t < minele) 
            return minele;
        else
            return t; 
    }
    
    int getMin() {
        if (s.empty()) 
            return NULL;
        else
            return (int)minele; 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */