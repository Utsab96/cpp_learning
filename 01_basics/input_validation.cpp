// 12. Input validation (age > 18, salary > 0)


#include <iostream>
using namespace std;


int main(){

    int age, sal;

    cout << "Enter the age" << endl;
    cin >> age;

    cout << "Enter the salary" << endl;
    cin >> sal;

    cout << (age<18 ? "Invalid age" : (sal<=0?  "Invalid salary" : "valid input")) << endl;

    return 0;
}