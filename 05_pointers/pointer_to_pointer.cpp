// 8. Pointer to pointer

#include<iostream>
using namespace std;


int main(){

    int x =10;
    int *ptr = &x;
    int **pp  = &ptr;

    cout << "x: " << x << endl;
    cout << "*ptr: " << *ptr << endl;
    cout << "**pp: " << **pp << endl;

    return 0;
}