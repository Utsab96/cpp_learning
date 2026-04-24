// 12. Return pointer from function safely

#include<iostream>
using namespace std;

//wrong way

// int* getValue(){

//     int x =10;
//     return &x;
// }

//correct way

int* getValue(){

    int* ptr = new int(10); //heap
    return ptr;
}

int main(){
    
    int * p = getValue();
    cout << *p << endl;
    delete p;

    return 0;
}
