#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout << "Top " << s.top() << endl;

    s.pop();

    cout << "Top " << s.top() << endl;


    return 0;
}