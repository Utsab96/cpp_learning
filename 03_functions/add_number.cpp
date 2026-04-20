// 1. Function to add two numbers

#include<iostream>
using namespace std;

int addFunction(int a, int b){
    return a+b;
}
int main(){

    int a , b;
    cout << "Enter two number for add" << endl;
    cin >> a >> b;

    cout << addFunction(a, b) << endl;
    
    return 0;
}