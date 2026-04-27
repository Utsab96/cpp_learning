#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
    int marks;

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;

    }

};


int main(){
    
    Student s1; // here Studenst is a method and s1 is object of the method

    cout << "Enter name" << endl;
    cin >> s1.name;

    cout << "Enter age" << endl;
    cin >> s1.age;

    cout << "Enter marks" << endl;
    cin >> s1.marks;

    cout << "Student Details" << endl;
    s1.display();


    return 0;
}