#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* head = NULL;   // ✅ global head

// Insert at end
void insertEnd(int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
}

// Display list
void display(){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Reverse linked list
void reverse(){

    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){

        Node* next = curr->next;  // save next

        curr->next = prev;        // reverse link

        prev = curr;              // move prev
        curr = next;              // move curr
    }

    head = prev;  // new head
}

int main(){

    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    cout << "Original List: ";
    display();

    reverse();

    cout << "Reversed List: ";
    display();

    return 0;
}