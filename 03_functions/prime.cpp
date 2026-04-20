#include<iostream>

using namespace std;

//function to check if a number is prime or not
bool prime(int n){

    bool isPrime = true;

    if(n <=1 ){
        return isPrime = false;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        } 
    }

    if(isPrime){
        cout << "Its a prime number" << endl;
    }else{
        cout << "Its not a prime number" << endl;
    }

    return isPrime;
}


int main(){

    int n;

    cout << "Enter the number to check prime or not" << endl;
    cin >> n;

    prime(n);

    return 0;
}