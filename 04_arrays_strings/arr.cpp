#include<iostream>
using namespace std;


int main(){

    int arr[4];

    cout << "Enter the  4 array values " << endl;

    for (int i = 0; i < 4; i ++){

        cin >> arr[i];
    }
    for(int i = 0; i < 4; i++){
        cout << arr[i];

        if(i < 3){

            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}