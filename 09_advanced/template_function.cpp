// A function that works with ANY data type

#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b){
    return a + b;
}

int main(){

    cout << add(2, 3) << endl;        // int
    cout << add(2.5, 3.5) << endl;    // float

    return 0;
}