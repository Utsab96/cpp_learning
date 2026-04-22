// 9. Dangling pointer example

#include<iostream>
using namespace std;


int main(){

    int* ptr = new int(10);

    cout << *ptr <<endl; 
    
    delete ptr;

    cout << *ptr <<endl; // ❌ dangling pointer (danger)

    return 0;
}