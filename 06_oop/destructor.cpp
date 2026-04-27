// destructor

#include<iostream>
using namespace std;

class Student{

public:
    string name;

    //constructor
    Student(string n){
        name = n;
        cout << "Constructor called for " << name << endl;
    }

    ~Student(){
        cout << "Destructor called for " << name << endl;

    }

};


int main(){

    Student s1("Utsab");

    cout << "Inside main" << endl;
    return 0;
}