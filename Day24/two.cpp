//GFG:QUEUE USING ARRAY

class myQueue {
    int front,rear;
    int arr[1000];
    int size;

  public:
    myQueue(int n) {
        front=-1,rear=-1;
        size=n;
    }

    bool isEmpty() {
        return front==-1;
    }

    bool isFull() {
        return (rear+1 ) % size== front;
    }

    void enqueue(int x) {
        if(isFull()) return;
        
        if(isEmpty()){
            front=0;
            rear=0;
            arr[0]=x;
        }
        else rear = (rear+1)%size;
        arr[rear]=x;
        
    }

    void dequeue() {
        if(isEmpty()) return;
        if(front==rear){
            front=-1;
            rear=-1;
        }
       else front = (front +1) % size;
    }

    int getFront() {
        if(!isEmpty()) return arr[front];
        return -1;
    }

    int getRear() {
        if(!isEmpty()) return arr[rear];
        return -1;
    }
};