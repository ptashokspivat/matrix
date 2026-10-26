#include <iostream>
using namespace std;

int main(){
    int matrix[2][2];
    int tmatrix[2][2];
    int mmatrix[2][2];


    cout << "Input matrix 2x2: " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cin >> matrix[i][j];
            tmatrix[j][i] = matrix[i][j];
        }
    }

    cout << '\n' << "Matrix yang diinput: " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << '\n' << "Matrix transpose: " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << tmatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << '\n' << "Perkalian matrix input dan transposnya: " << endl;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            int x = 0;
            for (int k = 0; k < 2; k++){    
                x += matrix[i][k]*tmatrix[k][j];
            }
            cout << x << " "; 
        }
        cout << endl;
    }
    return 0;
}