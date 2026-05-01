#include<iostream>
using namespace std;

int main(){

    auto greet = [](){
        cout << "Hello Utsab" << endl;
    };

    greet();  // call it

    return 0;
}