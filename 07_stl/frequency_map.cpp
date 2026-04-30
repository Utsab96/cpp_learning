#include<iostream>
#include<vector>
#include<map>
using namespace std;


int main(){

    vector<int> v = {1,2,3,1,5,6,2,3,4,3,8,3};

    map<int, int> freq;

    for(int i : v){
        freq[i]++;
    }

    for(auto p : freq){
        cout << p.first << ":" << p.second << endl;

    }

    

    return 0;
}