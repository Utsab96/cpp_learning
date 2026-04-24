// 11. Stack vs Heap demonstration (code)

#include<iostream>
using namespace std;


void stackExample(){
    int x = 10;
    cout << "Stack variable x value: " << x << endl;
    cout << "Stack variable x address: " << &x << endl;
}

void heapExample(){

    int* ptr = new int(10);

    cout << "Heap value " << *ptr << endl;
    cout << "Heap address " << ptr << endl;
    cout << "Pointer address(stack)  " << &ptr << endl;

    delete ptr;
}
int main(){

    cout << "----- Stack Example -----" << endl;
    stackExample();

    cout << "\n----- Heap Example -----" << endl;
    heapExample();



    return 0;
}