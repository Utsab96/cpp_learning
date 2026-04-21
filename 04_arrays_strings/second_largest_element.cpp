// 6. Second largest element
#include<iostream>
#include<climits>
using namespace std;



int main(){

    int arr[4];

    cout << "Enter four number to check the second largest" << endl;
    for (int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i=0; i<4; i++){
        if(arr[i] > largest){
            second_largest = largest;
            largest = arr[i];
        }else if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }

    cout << "second largest number is "<< second_largest << endl;
    return 0;
}