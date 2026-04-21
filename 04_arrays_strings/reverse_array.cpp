// 3. Reverse array

#include<iostream>
using namespace std;



int main(){

    int arr[6] = {1,2,3,4,5,6};

    int rev_arr[6];

    for(int i = 0; i < 6; i++){
        rev_arr[i] = arr[5-i];
    }

    for (int i=0; i < 6; i++){
        cout << rev_arr[i];
        if(i<5){
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}