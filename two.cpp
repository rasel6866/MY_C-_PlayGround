#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // maximum size of the queue

class Queue {
private:
    int arr[MAX_SIZE];
    int front; // index of the front element in the queue
    int rear; // index of the rear element in the queue
    int size; // current size of the queue

public:
    Queue() { // constructor
        front = 0; // initialize the front to 0, indicating an empty queue
        rear = -1; // initialize the rear to -1, indicating an empty queue
        size = 0; // initialize the size to 0, indicating an empty queue
    }

    bool isFull() {
        return (size == MAX_SIZE); // if size equals MAX_SIZE, queue is full
    }

    bool isEmpty() {
        return (size == 0); // if size equals 0, queue is empty
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue overflowed!!!" << endl;
            return;
        }
        rear = (rear + 1) % MAX_SIZE; // increment the rear in a circular fashion
        arr[rear] = val; // add the new element to the queue
        size++; // increment the size of the queue
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1; // return -1 to indicate an error
        }
        int val = arr[front]; // store the front element
        front = (front + 1) % MAX_SIZE; // increment the front in a circular fashion
        size--; // decrement the size of the queue
        return val; // return the front element
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements are:" << endl;
        for (int i = 0; i < size; i++) {
            int index = (front + i) % MAX_SIZE; // calculate the index of the current element in a circular fashion
            cout << arr[index] << endl; // display the queue elements
        }
    }
};

int main() {
    cout<<"ABDULLAH AL MARUF : 22-47997-2"<<endl;
    Queue q;
    int choice, val;

    while (1) {
        cout << "Enter your choice: " << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to be enqueued:" << endl;
                cin >> val;
                q.enqueue(val);
                break;

            case 2:
                val = q.dequeue();
                if (val != -1) {
                    cout << "Dequeued element is: " << val << endl;
                }
                break;

            case 3:
                q.display();
                break;

            case 4:
               // exit(0);

            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
