// 4. Swap two numbers (without temp)

#include <iostream>

using  namespace std;

int main(){

    float a, b ;

    cout << "Enter two number as A and B " << endl;
    cin >> a >> b;

    // if a is 10 and b is 20 
    a = a + b; // here a becomes (10+20)=30
    b = a - b; // here b becomes (30-20)=10
    a = a - b; // here a becomes (30-10)=20
    
    cout << "A is " << a << " B is " << b << endl;

}