// 5. Check prime number

//prime number can be divided by 1 and the same number;

#include<iostream>
using namespace std;

int main(){

    int n ;
    cout << "Enter the number to test its a prime or not" << endl;
    cin >> n;

    if(n <=1){
        cout << "Its not a prime number" << endl;
        return 0;
    }
    bool is_prime = true;

    for (int i=2; i<n ; i++){
        if(n%i==0){
            is_prime = false;
            break;
        }
    }

    if(is_prime){
        cout << "Its a prime number" << endl;
    }else{
        cout << "Its not a prime number" << endl;
    }
    return 0;
}