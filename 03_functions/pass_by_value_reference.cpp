#include<iostream>
using namespace std;

void passByValue(int a){
    a = 50;
}

void passByReference(int &a){
    a = 50;
}

int main(){

    int a = 10;

    passByValue(a);
    cout << "Pass by value " << a << endl;

    passByReference(a);
    cout << "Pass by reference " << a << endl;

    return  0;
}