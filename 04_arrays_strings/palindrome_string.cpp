// 4. Check palindrome string


#include<iostream>
using namespace std;


int main(){
    
    string ch;
    bool isPalindrome = true;

    cout << "Enter the string to chekck palindrome or not" << endl;
    cin >> ch;
    
    int len = ch.length();

    for (int i =0; i < len/2; i++){
        if(ch[i] != ch[len-1-i]){
            isPalindrome = false;
        }
    }

    if(isPalindrome){
        cout << "Its a palindrome number" << endl;
    }else{
        cout << "Its not a palindrome number" << endl;
    }

    return 0;
}