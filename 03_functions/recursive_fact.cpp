#include<iostream>
using namespace std;


int recursive_factorial(int n){

    if(n >1){

        return n*recursive_factorial(n-1);
    }else{
        return 1;
    }
}
int main(){

    int n ;
    cout << "Enter the number to test factorial or not" << endl;
    cin >> n ;
    cout << recursive_factorial(n) << endl;
    
    return 0;
}