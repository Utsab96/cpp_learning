#include<iostream>
using namespace std;

#define SIZE 5

class Stack{
    int arr[SIZE];
    int top;

public:
    Stack(){
        top = -1;
    }

    // Push
    void push(int val){
        if(top == SIZE - 1){
            cout << "Stack Overflow\n";
            return;
        }
        top++;
        arr[top] = val;
    }

    // Pop
    void pop(){
        if(top == -1){
            cout << "Stack Underflow\n";
            return;
        }
        cout << "Popped: " << arr[top] << endl;
        top--;
    }

    // Peek
    void peek(){
        if(top == -1){
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    // Display
    void display(){
        if(top == -1){
            cout << "Stack is empty\n";
            return;
        }

        for(int i = top; i >= 0; i--){
            cout << arr[i] << endl;
        }
    }
};

int main(){

    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.peek();

    return 0;
}