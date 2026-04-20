// 7. Recursive Fibonacci

#include<iostream>
using namespace std;

int recursive_fibonacci(int n){

   if(n ==0 || n ==1){
    return  n;
   }
   return recursive_fibonacci(n-1) + recursive_fibonacci(n-2);
    
}
int main(){

    int n;
    cout << "Enter the number of range" << endl;
    cin >> n;

    for (int i = 0; i<n; i++){
        cout << recursive_fibonacci(i) << ", ";

    }

    return 0;
}