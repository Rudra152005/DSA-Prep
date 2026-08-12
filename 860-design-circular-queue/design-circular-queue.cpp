class MyCircularQueue {
private:
    vector<int> arr;
    int front;
    int rare;
    int cap;
    int size;
public:
    MyCircularQueue(int k) {
        cap = k;
        arr.resize(k);
        front = 0;
        rare = 0;
        size = 0;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        arr[rare] = value;
        rare = (rare + 1) % cap; 
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        front = (front + 1) % cap;
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty()){
            return -1;
        }
        return arr[front];
        
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        int index = (rare - 1 + cap) % cap;

        return arr[index];
        
    }
    
    bool isEmpty() {
        return size == 0;
        
    }
    
    bool isFull() {
        return size == cap;
        
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */