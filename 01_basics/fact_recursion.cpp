#include <iostream>

using namespace std;

//creating recursion fucntion
int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }else{
        return 1;
    }
}

int  main(){
    int n;

    cout << "Enter the number" << endl;

    cin >> n;
    cout << factorial(n) << endl;
    
    factorial(n);
}

