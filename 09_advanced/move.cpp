#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v1 = {1,2,3,4,5};

    vector<int> v2 = move(v1);

    cout << "v1 size: " << v1.size() << endl;
    cout << "v2 size: " << v2.size() << endl;

    return 0;
}