#include<iostream>
using namespace std;

class Bank{
    private:
        int balance = 0;
        long long account_number = 0;
        string name = " ";

    public:

        //creating constructor
        Bank(long long acc, string n){
            account_number = acc;
            name = n;
            balance = 0;
        }

        //deposit
        void deposit(int amount){
            if(amount > 0){
                balance +=amount;
                cout << "Deposited: " << amount << endl;
            }else{
                cout << "Invalid ballance";
            }
        }
        //withdraw
        void withdraw(int amount){
            if(amount <= 0){
                 cout << "Invalid amount!" << endl;
            }else if(amount > balance){
                 cout << "Insufficient balance!" << endl;
            }else{
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
            }
        }

        void check_ballance(){
             cout << "Current Balance: " << balance << endl;
        }

        void display(){
            cout << "Account Ballance " << balance << endl;
            cout << "Account NUmber " << account_number << endl;
            cout << "Name " << name << endl; 
        }
};




int  main(){

    long long acc;
    string name;

    cout << "Enter you account number and your name: " << endl;
    cin >> acc >> name;

    Bank b1(acc, name);

    int choice, amount;

    do{
        cout << "\n-----Menu--------\n";
        cout << "1. Deposite\n";
        cout << "2. Withdrawn\n";
        cout << "3. Check Ballance\n";
        cout << "4. Display amount\n";
        cout << "0. Exit \n";

        cout << "Enter your choice " << endl;
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter yout amount to deposit" << endl;
                cin >> amount;
                b1.deposit(amount);
                break;

            case 2:
                cout << "Enter amount to withdraw" << endl;
                cin >> amount;
                b1.withdraw(amount);
                break;

            case 3:
                b1.check_ballance();
                break;

            case 4:
                b1.display();
                break;

            case 0:
                cout << "Exiting---" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    }while(choice != 0);

    return  0;
}