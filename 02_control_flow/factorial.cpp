// 4. Factorial (loop)

//factorial of 5 is = 5*4*3*2*1

#include<iostream>

using namespace std;

int main(){

    int n;
    int result = 1; 
    cout << "Enter the number for factorial"<< endl;
    cin >> n;

    // for(int i=1; i<=n; i++){
    //     cout << "i value is " << i << endl;
    //     result = result*i;
    // }
    // cout << "The factorial of " << n << " is " << result << endl;


    //using while loop

    while (n>1){
        result = result * n;
        --n;
    }
    cout << "The factorial of " << n << " is " << result << endl;


    return 0;
}