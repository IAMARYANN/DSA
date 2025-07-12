class MinStack {
    vector<pair<int,int>>st;
    int topi;
    int small;
public:
    MinStack() {
        topi=-1;
    }
    void push(int val) {
        if(st.empty()){
            small=val;
            st.push_back({val,small});
            topi=topi+1;
        }
        else{
            if(small>val)small=val;
            st.push_back({val,small});
            topi=topi+1;
        }
    }
    void pop() {
    if (!st.empty()) {
        st.pop_back();
        topi--;
        if (!st.empty()) {
            small = st[topi].second;
        }
      }
    }
    
    int top() {
        return st[topi].first;
    }
    
    int getMin() {
        return st[topi].second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */