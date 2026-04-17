// 6. Reverse a number

#include<iostream>
using namespace std;


int main(){

    int num;
    int reverse_num = 0;

    cout << "Enter a number you want to reverse" << endl;
    cin >> num;

    //example, the number is 512
    while (num > 0){                                    // 512>0
        int temp = num % 10;                            // 512 % 10 = 2
        reverse_num = reverse_num * 10 + temp;          // 0* 10 + 2 = 2
        num = num / 10;                                 // 512 / 10 = 51
    }
    cout << "The reversed number is "<< reverse_num << endl;

    return 0;
}