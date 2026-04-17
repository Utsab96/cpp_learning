// 7. Count digits

#include<iostream>
using namespace std;



int main(){

    int n;
    int count = 0; 

    cout << "Enter the number" << endl;
    cin >> n;

    while (n > 0)
    {
        n = n / 10;
        ++count;
    }
    cout << "The count of the numbner  is " << count << endl;

    return 0;
}