// 7. Remove duplicates

#include<iostream>
using namespace std;


int main(){

    int arr[8] = {2,6,7,9,6,7,9,10};
    int new_arr[8];

    int new_size = 0;
    
    
    for(int i = 0; i < 8; i++){
        
        bool is_duplicate = false;

        for(int j=0; j < new_size; j++){
            if(arr[i] == new_arr[j]){
                is_duplicate = true;
                break;
            }
        }
        if(!is_duplicate){
            new_arr[new_size] = arr[i];
            ++new_size;
        }
    }
    for(int i=0; i<new_size; i++){
        cout << new_arr[i];
        if(i< new_size-1){
            cout << ", ";
        }
    }
    cout << endl;
    return 0;
}