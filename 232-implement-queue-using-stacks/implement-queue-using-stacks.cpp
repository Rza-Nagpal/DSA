class MyQueue {
private:
    stack<int> input;
    stack<int> output;

    void shiftStacks() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
    }

public:
    MyQueue() {}
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        shiftStacks();
        int val = output.top();
        output.pop();
        return val;
    }
    
    int peek() {
        shiftStacks();
        return output.top();
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};