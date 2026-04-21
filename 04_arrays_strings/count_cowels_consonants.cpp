// 5. Count vowels and consonants

#include<iostream>
using namespace std;

int main(){

    string word;
    int count_vowels = 0;
    int count_consonants = 0;

    string vowels = "aeiouAEIOU";
    cout << "Enter the word  to count vowels and consonants" << endl;
    cin >> word;
    for (int i = 0; i< word.length(); i++){
        if(vowels.find(word[i]) != string::npos){
            ++count_vowels;
        }else{
            ++count_consonants;
        }
    }
    cout << "count of vowels are " << count_vowels << endl;
    cout << "count of consonants are " << count_consonants << endl;

    return 0;
}