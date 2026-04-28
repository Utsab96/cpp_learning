#include<iostream>
using namespace std;

class Calculator{
    public:
        int add(int a, int b){
            cout << "Adding two integer" << endl;
            return a+b;
        }

        int add(int a, int b , int c){
            cout << "Adding three integer" << endl;
            return a+b+c;
        }
        double add(double a, double b){
            cout << "Adding three float" << endl;
            return a+b;
        }
};
int main(){

    Calculator c;

    cout << c.add(5, 6) << endl;;
    cout << c.add(5,6,7) << endl;
    cout << c.add(2.5, 3.3)<< endl;

    return 0;
}

