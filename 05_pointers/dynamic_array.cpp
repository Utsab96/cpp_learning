// 7. Dynamic array using new/delete

//dynamic array is created with dynamic memory(heap)

#include<iostream>
using namespace std;


int main(){

    int n;
    cout << "Enter the size of the array" << endl;
    cin >> n;

    int *arr = new int[n]; // create dynamic array

    cout << "Enter elements: " << endl;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i<n; i++){
        cout << arr[i];
        if(i < (n-1)){
            cout << ", ";
        }
    }
    cout << endl;

    delete[] arr; // free memeory
    
    return 0;

}
