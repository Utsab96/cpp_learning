// 2. Function to check palindrome number

// palindrome number is same after reverese example 121

#include<iostream>
using namespace std;

int palindrome(int num){
    
    int reverse_num = 0;
    int original_num = num;
    bool isPalindrome;
    while (num>0){
        int temp = num % 10;
        reverse_num = reverse_num * 10 + temp;
        num  = num / 10;
    }
    if(original_num == reverse_num){
        cout << "Its a palindrome number" << endl;
    }else{
        cout << "Its not a palindrome number" << endl;
    }
    return 0;
}
int main(){

    int num;
    cout << "Enter the number to test as palindrome or not" << endl;
    cin >> num;

    palindrome(num);

    return 0;
}