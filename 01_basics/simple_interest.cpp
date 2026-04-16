// 8. Calculate simple interest

#include <iostream>
using namespace std;

int main(){

    //SI = (P * R * T) / 100
    float principal, rate_of_interest, time;


    cout << "Enter the Principal" << endl;
    cin >> principal;

    cout << "Enter the percentage  Rate of Interest " << endl;
    cin >> rate_of_interest;

    cout << "Enter the Time" << endl;
    cin >> time;

    float simple_interest = (principal * rate_of_interest * time) / 100;

    cout << "The simple interest is "<< simple_interest<< endl;

    return 0;
}