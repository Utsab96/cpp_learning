// 5. Check even or odd

#include <iostream>

using namespace std;

int main(){

    int a;

    cout << "Enter a number to check its odd or even " << endl;
    cin >> a;

    if(a%2==0){
        cout << "Its an even number " << endl;
    }else{
        cout << "Its a odd number " <<endl;
    }

}