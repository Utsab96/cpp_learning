// 6. Pointer arithmetic
#include<iostream>
using namespace std;


int main(){

    int x = 10;
    int *ptr = &x;

    cout << "In case of varibale it returns  the variable value: " <<*(ptr) << endl;

    cout << "In case of of varibale ptr+1 will return garbage value: "<<*(ptr+1) << endl;

    int arr[4] = {1,2,3,4};

    int *arr_ptr  = arr;

    cout << "Array first: " << *arr_ptr << endl;
    cout << "Next element: " << *(arr_ptr + 1) << endl;
    cout << "Third element: " << *(arr_ptr + 2) << endl;

    arr_ptr++;
    cout << "Intcremented the pointer value by 1: " << *arr_ptr << endl;

    arr_ptr--;
    cout << "Decremented the pointer value by 1: " << *arr_ptr << endl;


    return 0;
}