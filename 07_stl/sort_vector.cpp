#include<iostream>
#include<vector>
#include<algorithm> // required for sort method
using namespace std;


int main(){

    vector<int> v = {30, 40, 10, 15, 5, 35};

    sort(v.begin(), v.end());

    for(int i : v){
        cout << i << " ";
    }
    return 0;
}