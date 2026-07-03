class MyQueue {
private:
    stack<int> inp;
    stack<int> opt;

public:
    MyQueue() {
    }

    void push(int x) {
        inp.push(x);
    }

    int pop() {
        if (opt.empty()) {
            while (!inp.empty()) {
                opt.push(inp.top());
                inp.pop();
            }
        }

        int val = opt.top();
        opt.pop();
        return val;
    }

    int peek() {
        if (opt.empty()) {
            while (!inp.empty()) {
                opt.push(inp.top());   // Fixed here
                inp.pop();
            }
        }

        return opt.top();
    }

    bool empty() {
        return inp.empty() && opt.empty();
    }
};