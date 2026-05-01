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

class LinkedList{
    public:
        Node* head;

        LinkedList(){
            head = NULL;
        }

        //Insert at beginning
        void insertFront(int val){
            Node* newNode = new Node(val);
            newNode->next = head;
            head = newNode;
        }

        //insert at the end
        void insertEnd(int val){
            Node* newNode = new Node(val);

            if( head == NULL){
                head =  newNode;
                return;
            }
            Node* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }

        //delete a value
        void deleteVal(int val){
            if(head == NULL) return;

            if(head->data == val){
                Node* toDelete = head;
                head = head->next;
                delete toDelete;
                return;
            }
            Node* temp = head;
            while(temp->next != NULL){
                if(temp->next->data == val){
                    Node* toDelete = temp->next;
                    temp->next = temp->next->next;
                    delete toDelete;
                    return;
                }
                temp = temp->next;
            }
            cout << "Value not found!" << endl;
        };

        //insert at any position
        void insertAtPosition(int val, int pos) {
        Node* newNode = new Node(val);

        if (pos == 1) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* temp = head;
        for (int i = 1; i < pos - 1; i++) {
            if (temp == NULL) {
                cout << "Position out of range!" << endl;
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }
    //search
    bool searchVal(int val){
        Node *temp = head;

        while(temp != NULL){
            if(temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }
    //print
    void printVal(){
        Node*temp = head;
        while(temp != NULL){
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    };

int main(){


    LinkedList ll;

    ll.insertEnd(3);
    ll.insertEnd(5);
    ll.insertEnd(8);
    ll.insertFront(1);
    ll.printVal();                  // 1 → 3 → 5 → 8 → NULL

    ll.insertAtPosition(99, 3);
    ll.printVal();                  // 1 → 3 → 99 → 5 → 8 → NULL

    ll.deleteVal(99);
    ll.printVal();                  // 1 → 3 → 5 → 8 → NULL

    cout << ll.searchVal(5) << endl;   // 1 (true)
    cout << ll.searchVal(99) << endl;  // 0 (false)


    return 0;
}