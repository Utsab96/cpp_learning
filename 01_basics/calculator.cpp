// 11. Build CLI calculator (+, -, *, /)

#include <iostream>
using namespace std;

float calculator(float n1, float n2, char op){
    
    switch(op){

        case '+' :
            return n1+n2;
        case '-':
            return n1-n2;
        case '*':
            return n1*n2;
        case '/':
            if(n2 == 0){
                cout << "Error : devision by zero" << endl;
                return 0;
            }
            return n1/n2;

        default:
            cout << "Invalid operator" << endl;
            return 0;
         
    }
}

int main(){

    float n1, n2;
    char op;

    cout << "Enter expression (e.g. 5 + 3): ";
    cin >> n1 >> op >> n2;

    float answer = calculator(n1, n2, op);

    cout << "Result: " << answer << endl;

    return 0;
}