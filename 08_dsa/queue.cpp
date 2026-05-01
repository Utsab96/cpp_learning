#include<iostream>
using namespace std;

#define SIZE 5

class Queue{
    int arr[SIZE];
    int front, rear;

public:
    Queue(){
        front = -1;
        rear = -1;
    }

    // Enqueue
    void enqueue(int val){
        if(rear == SIZE - 1){
            cout << "Queue Overflow\n";
            return;
        }

        if(front == -1) front = 0;

        rear++;
        arr[rear] = val;
    }

    // Dequeue
    void dequeue(){
        if(front == -1 || front > rear){
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Removed: " << arr[front] << endl;
        front++;
    }

    // Peek
    void peek(){
        if(front == -1 || front > rear){
            cout << "Queue is empty\n";
            return;
        }

        cout << "Front element: " << arr[front] << endl;
    }

    // Display
    void display(){
        if(front == -1 || front > rear){
            cout << "Queue is empty\n";
            return;
        }

        for(int i = front; i <= rear; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){

    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.peek();

    return 0;
}