#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v = {5,4,3,1,2,6,7};

    sort(v.begin(), v.end(), [](int a, int b ){
        return b>a;
    });
    
    for(int i : v){
        cout << i << " ";
    }
    return 0;
}