// 10. Memory leak example

#include<iostream>
using namespace std;

int main(){

    int* ptr = new int(10); // int* is a pinter to datatype

    // forgot to delete
    int* ptr_1  = new int(10);


    ptr_1 = new int(20);

    delete ptr_1;
    //acdress of 10 is lost 

    return 0;
}