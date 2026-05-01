#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> v = {2,3,4,6,7,9,1,8};
    int target = 10;

    for(int i : v){
        if(i == target){
             cout << "Found at index " << i << endl;
            return 0;
        }
    }
    cout << "Not found" << endl;

    return 0;
}