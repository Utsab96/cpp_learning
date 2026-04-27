#include<iostream>
using namespace std;


//creating class
class Student{

public:
    string name;
    int age;

    //constructor
    Student(string n, int a){
        name = n;
        age = a;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main(){

    Student s1("utsab",  30);
    s1.display();

    return 0;
}