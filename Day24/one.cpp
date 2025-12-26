//GFG: STACK USING ARRAY
class myStack {
    int arr[1000];
    int size;
    int crsize;
  public:
    myStack(int n) {
        size = n;
        crsize=-1;
    }

    bool isEmpty() {
        return crsize==-1;
    }

    bool isFull() {
       return crsize == size-1;
    }

    void push(int x) {
        if(crsize<size) arr[++crsize] = x;
    }

    void pop() {
        if(crsize>-1)  crsize--;
    }

    int peek() {
        if(crsize==-1) return -1;
        return arr[crsize];
    }
};