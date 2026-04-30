#include<iostream>
#include<vector>
using namespace std;

//vector is a dynamic array
int main(){

    vector<int> v; //vector created

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    cout << v.size() << endl;

    for(int i =0; i<v.size(); i++){
        cout << v[i] << "";
        if(i<v.size()-1){
            cout << ", " ;
        }
    }
    cout << endl;

    v.pop_back();
    for(int i =0; i<v.size(); i++){
        cout << v[i] << "";
        if(i<v.size()-1){
            cout << ", " ;
        }
    }
    cout << endl;

    v.erase(v.begin()+0);

    for(int i =0; i<v.size(); i++){
        cout << v[i] << "";
        if(i<v.size()-1){
            cout << ", " ;
        }
    }
    cout << endl;
    
    return 0;
}