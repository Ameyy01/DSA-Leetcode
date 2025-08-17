#include <bits/stdc++.h>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Queue class using Linked List
class Queue {
private:
    Node* front; // points to front element
    Node* rear;  // points to last element

public:
    Queue() {
        front = nullptr;
        rear = nullptr;
    }
    
    void enqueue(int val) {
        Node* newNode = new Node;
        newNode->data = val;
        newNode->next = nullptr;
        
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        
        if (front == nullptr) {
            rear = nullptr;
        }
        
        delete temp;
    }
    
    // Peek (front element)
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    // Check if queue is empty
    bool isEmpty() {
        return front == nullptr;
    }
};

// Driver code
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.peek() << endl; // 10
    q.dequeue();

    cout << q.peek() << endl; // 20
    q.dequeue();

    cout << q.peek() << endl; // 30
    q.dequeue();

    cout << (q.isEmpty() ? "Empty" : "Not Empty") << endl;

    return 0;
}
