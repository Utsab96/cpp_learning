#include<iostream>
using namespace std;

// Base class
class User{
public:
    virtual void role(){   // 🔥 virtual function
        cout << "I am a User" << endl;
    }
};

// Derived class
class Admin : public User{
public:
    void role(){   // override
        cout << "I am an Admin" << endl;
    }
};

int main(){

    User* ptr;

    User u;
    Admin a;

    ptr = &u;
    ptr->role();   // User version

    ptr = &a;
    ptr->role();   // Admin version ✅

    return 0;
}