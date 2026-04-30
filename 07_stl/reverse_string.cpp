#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){

    string s = "utsab";
        
    stack<char> st;

    for (char c : s){
        st.push(c);
    }

    string rev = " ";

    while(!st.empty()){
        rev += st.top();
        st.pop();
    }
    
    cout << rev << endl;
    
    return 0;
}