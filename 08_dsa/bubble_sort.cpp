#include<iostream>
#include<vector>
using namespace std;


int main(){

    vector<int> v = {3,2,4,5,6,9,8,7};

    for(int i = 0; i<v.size(); i++){
        for(int j = 0; j<v.size()-i-1; j++){
            if(v[j]>v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    } 
    for(int i : v){
        cout << i << " " << endl;
    }
    return 0;

}