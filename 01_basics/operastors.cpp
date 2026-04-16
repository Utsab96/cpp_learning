// 2. Take two numbers and print sum, difference, multiplication

#include <iostream>
using namespace std;

//addition fucntions
float add(float n1, float n2){
    return n1+n2;
}

//substration fucntion

float sub(float n1, float n2){
    return n1-n2;
}

//multiplication fucntion
float mul(float n1, float n2){
    return n1*n2;
}

//devision fucntion
float divide(float n1, float n2){
    return n1/n2;
}


int  main(){
    
    float n1, n2;

    cout << "Enter two numbers" <<endl;
    cin >> n1 >> n2;

    cout << "The addition of this two number is " << add(n1, n2) << endl;

    cout << "The substration of this two number is " << sub(n1, n2) << endl;

    cout << "The multiplication of this two number is " << mul(n1, n2) << endl;

    cout << "The devision of this two number is " << divide(n1, n2) << endl;



}
