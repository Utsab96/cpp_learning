
#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream file("data.txt");   // create/open file

    file << "Hello Utsab\n";
    file << "Learning C++";

    file.close();   // always close

    return 0;
}