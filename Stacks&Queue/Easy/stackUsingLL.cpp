// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node * next; 
    Node(int val){
        data = val;
        next = nullptr;
    }
};

class Stack {
    private: 
        Node* top; 
    public: 
        Stack(){
            top = nullptr;
        }
    
    void push(int val){
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
    }    
    
    void pop(){
        if (isEmpty()){
            cout << "Stack Underflow\n";
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    
    int peek(){
        if( isEmpty()){
            cout<< "Stack is empty\n";
            return -1;
        }
        return top->data;
    }
    bool isEmpty(){
        return top == nullptr;
    }
};

int main() {
        Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    cout << st.peek() << endl; // 30
    st.pop();
    cout << st.peek() << endl; // 20
    st.pop();
    cout << st.peek() << endl; // 10
    st.pop();

    cout << (st.isEmpty() ? "Empty" : "Not Empty") << endl;

    return 0;
}
