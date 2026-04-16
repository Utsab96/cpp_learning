// 6. Find largest of 3 numbers


#include <iostream>
using namespace std;

int main (){

    int a, b, c;
    cout << "Enter three number to find the largest as A, B and C "<< endl;
    cin >> a >> b >> c;

    // if(a >= b && a >= c){
    //     cout << "A is the largest number";
    // }else if(b >= a && b >= c){
    //     cout << "B is the largest number";
    // }else{
    //     cout << "C is the largest number";
    // }

    //nested loop

    if(a>=b){
        if(a>=c){
            cout << "A is the largest number";
        }else{
            cout << "C is the largest number";

        }
    }else{
        if(b>=c){
            cout << "B is the largest number";

        }else{
            cout << "C is the largest number";

        }
    }
    return 0;
}