// 10. Matrix transpose

#include<iostream>
using namespace std;


int main(){

    cout << "Enter the 3x3 matrix for transpose" << endl;
    int matrix[3][3];
    int trans_matrix[3][3];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){

            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            trans_matrix[i][j] = matrix[j][i];
        }
    }
    cout << "Input" << endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Output" << endl;
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout << trans_matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}