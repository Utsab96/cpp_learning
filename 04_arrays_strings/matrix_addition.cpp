// 9. Matrix addition

#include<iostream>
using namespace std;

int main(){

    int  rows, cols;

    int A[10][10], B[10][10], C[10][10];

    cout << "Enter the rows and columns" << endl;
    cin >> rows >> cols;

    cout << "Enter the elements of A" << endl;

    for (int i =0; i<rows; i++){
        for (int j =0; j<cols; j++){
            cin >> A[i][j];
        }

    }
    cout << "Enter the elements of B" << endl;

    for (int i = 0; i <rows; i++ ){
        for(int j =0; j<cols; j++){
            cin >> B[i][j];
        }
    }

    for (int i = 0; i<rows; i++){
        for (int j =0 ; j<cols; j++){
            C[i][j] =  A[i][j] + B[i][j];
        }
    }

    for (int i = 0; i<rows; i++){
        for(int j = 0; j<cols; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}