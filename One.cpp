#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // maximum size of the stack

class Stack {
private:
    int arr[MAX_SIZE];
    int top; 
public:
    Stack() { 
        top = -1; // initialize the top to -1, indicating an empty stack
    }

    bool isFull() {
        return (top == MAX_SIZE - 1); // if top equals MAX_SIZE - 1, stack is full
    }

    bool isEmpty() {
        return (top == -1); // if top equals -1, stack is empty
    }

    void push(int val) {
        if (isFull()) {
            cout << "Stack overflowed!!!" << endl;
            return;
        }
        arr[++top] = val; // increment the top and add the new element to the stack
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1; // return -1 to indicate an error
        }
        return arr[top--]; // return the top element and decrement the top
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements are:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl; // display the stack elements from top to bottom
        }
    }
};

int main() {
    cout<<"ABDULLAH AL MARUF : 22-47997-2"<<endl;
    Stack s;
    int choice, val;

    while (1) {
        cout << "Enter your choice: " << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to be pushed:" << endl;
                cin >> val;
                s.push(val);
                break;

            case 2:
                val = s.pop();
                if (val != -1) {
                    cout << "Popped element is: " << val << endl;
                }
                break;

            case 3:
                s.display();
                break;

            case 4:
                exit(0);

            default:
                cout << "Invalid choice" << endl;
        }
    }
    return 0;
}
