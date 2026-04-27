#include<iostream>
using namespace std;

//parent class
class User{
    protected:
        long long account_number;
        string name;
        long balance;
    public: 
        //creating constructor 
        User(long long acc, string n){
            account_number = acc;
            name = n;
            balance = 0;
        }

        //deposit
        void deposit(long amount){
            if(amount > 0){
                balance +=amount;
                cout << "Deposited" << endl;
            }else{
                cout << "Invalid amount!" << endl;
            }
        }
        //withdraw
        void withdraw(long amount){
            if (amount <= 0){
                cout << "Invalid amount" << endl;
            }else if(amount > balance){
                cout << "Insufficient Balance" << endl;
            }else{
                balance -=amount;
            }
        }
        //check balance
        void check_balance(){
            cout << "Your account balance is " << balance << endl;
        }

        //display
        void display(){
            cout << "Your account number is " << account_number << endl;
            cout << "Your account name is " << name << endl;
            cout << "Your account balance is " << balance << endl;
        }
};


//child class will inmherit from parent
class Admin : public User{
    
    public:
        //creating constructor
        Admin(long long acc, string n) : User(acc, n){}

        //Extra power reset bank balance
        void resetBalance(){
            balance  = 0;
            cout << "balance reset by admin";
        }
        void showUser(){
            cout << "---[Admin view]---"<< endl;;
            display();
        }
};


int main(){

    long long acc;
    string name;

    cout << "Enter account number and name: ";
    cin >> acc >> name;

    // Create User
    User u1(acc, name);

    // Create Admin
    Admin a1(acc, name);

    // User actions
    cout << "\n--- User Actions ---\n";
    u1.deposit(2000);
    u1.withdraw(500);
    u1.check_balance();

    // Admin actions
    cout << "\n--- Admin Actions ---\n";
    a1.showUser();
    a1.resetBalance();
    a1.check_balance();


    return 0;
}