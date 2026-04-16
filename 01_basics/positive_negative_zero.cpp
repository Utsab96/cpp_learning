// 10. Check positive / negative / zero


#include <iostream>

using namespace std;

int main(){

    float n;

    cout << "Enter the number" << endl;
    cin >> n;

    // if(n>0){
    //     cout << "'The number is posotive" << endl;
    // }else if(n<0){
    //     cout << "The number is negative" << endl;
        
    // }else{
    //     cout << "The number is zero" << endl;
    // }

    //Ternary Operator

    cout << (n > 0 ? "Positive" : (n < 0 ? "negative" : "Zero")) << endl;

    return 0;
}