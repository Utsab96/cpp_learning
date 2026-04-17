// 3. Sum of 1 to n

#include<iostream>

using namespace std;

int main(){

    int n;
    int result = 0;
    cout << "Enter the number you want sum from 1 " << endl;
    cin >> n;

    for (int i=1; i<=n; i++){
        result = result+i;
    }
    cout << "The result of the sum from 1 to " << n << " is " << result << endl;
    
    return 0;
}