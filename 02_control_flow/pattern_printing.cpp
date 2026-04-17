// 10. Pattern printing (pyramid, reverse)

#include<iostream>
using namespace std;


int main(){

  int n;
  cout << "Enter the number of rows" << endl;
  cin  >> n;

  for (int i =1; i<=n; i++){

    //spaces 
    for (int j = 1; j<= n-i; j++){
        cout << " ";
    }

    //stars
    for(int j = 1; j<=(2*i -1); j++){
        cout << "*";
    }
    cout << endl;
  }

  for(int i=n; i>=1; i--){

    //spaces
    for(int j=1; j<=(n-i); j++){
        cout << " ";
    }

    //stars
    for(int j=1; j<=(2*i)-1; j++){
        cout << "*";
    }
    cout << endl;
  }

    return 0;
}
