#include<iostream>
using namespace std;

class Money{
public:
    int amount;

    Money(int a){
        amount = a;
    }

    Money operator+(Money m){
        Money temp(0);
        temp.amount = amount + m.amount;
        return temp;
    }
};

int main(){
    Money m1(100);
    Money m2(200);

    Money m3 = m1 + m2;

    cout << m3.amount << endl;

    return 0;
}