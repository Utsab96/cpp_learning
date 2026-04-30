#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);
    dq.push_back(50);

    cout << "Front " << dq.front() << endl;
    cout << "Back " << dq.back() << endl;

    dq.pop_front();
    dq.pop_back();

    cout << "Front after pop " << dq.front() << endl;
    cout << "Back after pop " << dq.back() << endl;




    return 0;
}
