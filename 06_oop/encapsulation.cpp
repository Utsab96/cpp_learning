#include<iostream>
using namespace std;

class Student{
    private:
        string name = " ";
        int marks = 0;

    public:

        void setName(string n){
            if(n!= ""){
                name = n;
            }else{
                cout << "Invalid name!" << endl;
            }
        }
        void setMarks(int m){
            if(m >= 0 && m <=100){
                marks = m;
            }else{
                cout << "Invalid marks!" << endl;
            }
        }
        string setGrade(){
            if(marks >= 90) return "A";
            else if(marks >= 75) return "B";
            else if(marks >= 50) return "C";
            else return "Fail";
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Marks: " << marks << endl;
            cout << "Grade: " << setGrade() << endl;
        }
};


int main(){
    
    Student s1;

    int marks;
    string name;

    cout << "Enter your name and marks" << endl;
    cin >> name >> marks;

    s1.setName(name);
    s1.setMarks(marks);
    s1.display();


    return 0;
}
