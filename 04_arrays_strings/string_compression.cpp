// 8. String compression (aaabb → a3b2)

#include<iostream>
using namespace std;


int main(){

    string str = "aaabbccc";
    string compressed_str = " ";
    int count  = 1;

    for(int i = 0; i < str.length(); i++){
        if(str[i] == str[i+1]){
            ++count;
        }else{
            compressed_str += str[i];
            compressed_str += to_string(count);
            count = 1;

        }
    }
    cout << "Compressd string is " << compressed_str << endl;
    
    return 0;
}