#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int top; // index of the top element in the stack
    int size; // current size of the stack
    int capacity; // maximum size of the stack

public:
    Stack(int cap) { // constructor
        arr = new int[cap]; // allocate memory for the stack
        top = -1; // initialize the top to -1, indicating an empty stack
        size = 0; // initialize the size to 0, indicating an empty stack
        capacity = cap; // set the maximum size of the stack
    }

    bool isFull() {
        return (size == capacity); // if size equals capacity, stack is full
    }

    bool isEmpty() {
        return (size == 0); // if size equals 0, stack is empty
    }

    void push(int val) {
        if (isFull()) {
            cout << "Stack overflowed!!! Resizing..." << endl;
            capacity *= 2; // double the capacity of the stack
            int *new_arr = new int[capacity]; // allocate memory for the new stack
            for (int i = 0; i < size; i++) {
                new_arr[i] = arr[i]; // copy the elements from the old stack to the new stack
            }
            delete [] arr; // deallocate memory for the old stack
            arr = new_arr; // update the pointer to the new stack
        }
        top++; // increment the top
        arr[top] = val; // add the new element to the stack
        size++; // increment the size of the stack
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1; // return -1 to indicate an error
        }
        int val = arr[top]; // store the top element
        top--; // decrement the top
        size--; // decrement the size of the stack
        return val; // return the top element
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements are:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << endl; // display the stack elements
        }
    }

    ~Stack() { // destructor
        delete [] arr; // deallocate memory for the stack
    }
};

int main() {
    cout<<"ABDULLAH AL MARUF : 22-47997-2"<<endl;
    int cap, choice, val;
    cout << "Enter the capacity of the stack:" << endl;
    cin >> cap;

    Stack s(cap);

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
}
