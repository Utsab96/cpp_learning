// 7. Convert Celsius to Fahrenheit

#include <iostream>
using namespace std;


int main(){

    float c_temp;
    // F = C * (9/2) + 32
    cout << "Enter  the temperature in celsius" << endl;
    cin >>  c_temp;

    const float f_temp = (c_temp * (9.0/5) + 32);

    cout << "The temperature in fahrenheit is " << f_temp << endl;


    return 0;
}