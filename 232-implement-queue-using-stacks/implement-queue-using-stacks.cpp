class MyQueue {
    private:
       stack<int>st;
       stack<int>qt;
public:
    MyQueue() {
        
    }
    void push(int x) {
        st.push(x);
    }
    int pop() {
              // Transfer all from st to qt
        while (!st.empty()) {
            qt.push(st.top());
            st.pop();
        }

        // Pop the front element (which was the oldest)
        int front = qt.top();
        qt.pop();

        // Transfer remaining back to st
        while (!qt.empty()) {
            st.push(qt.top());
            qt.pop();
        }

        return front;
    }
    
    int peek() {
        while (!st.empty()) {
            qt.push(st.top());
            st.pop();
        }

        int front = qt.top(); // Get front
        // Push everything back
        while (!qt.empty()) {
            st.push(qt.top());
            qt.pop();
        }

        return front;
    }
    bool empty() {
      return st.empty();
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