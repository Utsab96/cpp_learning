#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> v = {3,2,4,5,6,9,8,7};

    for (int i = 0; i<v.size(); i++){
        int minIndex = i;

        for(int j = i+1;  j<v.size(); j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i], v[minIndex]);
    }

    for(int i : v){
        cout << i << " ";
    }

    return 0;
}