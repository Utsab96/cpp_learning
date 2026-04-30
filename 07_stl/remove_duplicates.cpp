#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,6,4,3,4,5,1,6,1,};

    set<int> s;

    for (int i : v){
        s.insert(i);
    }

    for(int i : s){
        cout << i << " ";
    }

    return 0;
}