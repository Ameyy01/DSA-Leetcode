class ArrayStack {
private:
    static const int MAX_SIZE = 1000;
    int arr[MAX_SIZE];
    int topIndex;

public:
    ArrayStack() {
        topIndex = -1;
    }
    
    void push(int x) {
        if(topIndex >= MAX_SIZE-1){
            cout << "Stack Overflow\n";
            return;
        }
        arr[++topIndex] = x;
   
    }
    
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[topIndex--];
    }
  
    }
    
    int top() {
         if (isEmpty()) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[topIndex];
    
    }
    
    bool isEmpty() {
        return topIndex == -1;
  
    }
};
