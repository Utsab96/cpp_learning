// 2. Print address of variable

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){

    int x = 10, y = 20;

    cout<<"Before swapping: "<<x<<" "<<y<<endl;
    swap(&x, &y);
    cout<<"After swapping: "<<x<<" "<<y<<endl;
    
    return 0;
}