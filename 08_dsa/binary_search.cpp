#include<iostream>
using namespace std;

int main(){

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int target = 10;

    int l = sizeof(arr) / sizeof(arr[0]);

    cout << "Length of the array " << l << endl;
    cout << "Size of the array " << sizeof(arr) << endl;
    cout << "Size of one array " << sizeof(arr[0]) << endl;

    int low = 0;

    int high = l-1;

    
    while(low<=target){
        int mid = (low+high)/2;

        if(arr[mid] == target){
            cout << "Target found at index " << mid << endl;
            return 0;
        }else if(target>arr[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    return 0;


}

