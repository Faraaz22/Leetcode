class MyCircularQueue {
    vector<int>q;
    int front;
    int rear;
    int n ;
public:
    MyCircularQueue(int k) {
        front = -1;
        rear = -1;
        n = k;
        q.resize(n);
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        if(rear == -1){
            front = 0;
            rear =0;
        }else{
            rear = (rear + 1) % n;
        }
        q[rear] = value;
        return true;
    }
    
    bool deQueue() {
        if(front == -1) return false;
        if(front == rear ) front = rear = -1;
        else front = (front+1)%n;
        return true;
    }
    
    int Front() {
        return front==-1 ? -1 : q[front];
    }
    
    int Rear() {
        return rear==-1 ? -1 : q[rear];
    }
    
    bool isEmpty() {
        return front== -1;
    }
    
    bool isFull() {
      return (rear+1)%n ==  front;  
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