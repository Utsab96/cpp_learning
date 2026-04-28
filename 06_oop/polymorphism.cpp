#include<iostream>
using namespace std;

class Bank{
    public:
        string name;
        long balance = 0;

        void addBalance(int amount){
            balance+=amount;
            cout << "Balance deposited: " << balance << endl;
            balance = 0;
        }

        void addBalance(int amount , int bonus){
            balance +=(amount+bonus);
            cout << "Balance deposited with bonus: " << balance << endl;
        }

};

int main(){
    Bank b1;

    b1.addBalance(1000);

    b1.addBalance(1000+500);

    return 0;
}