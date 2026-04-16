// 3. Swap two numbers (with temp)

#include <iostream>
using namespace std;



int main(){

    float a, b;

    cout << "Enter two numbers as A and B" << endl;
    cin >> a >> b;

    float temp = a;
    a = b;
    b = temp;

    cout << "A is "<< a << " and B is " << b << endl; 



}