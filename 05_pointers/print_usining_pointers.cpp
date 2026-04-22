// 1. Print value using pointer

#include<iostream>
using namespace std;


int main(){

    int x = 10;
    
    int *ptr = &x;

    cout << "value of X: " << x << endl;
    cout << "Address of ptd: " << &x << endl;
    cout << "Pointer value(address): " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}
