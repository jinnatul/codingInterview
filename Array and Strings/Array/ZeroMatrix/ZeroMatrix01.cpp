#include<bits/stdc++.h>

using namespace std;

void ZeroMatrix(int row, int column) {
    int zeroMatrix[row][column];

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cin >> zeroMatrix[i][j];
        }
    }

    bool zeroRows[row];
    bool zeroColumns[column];
    memset(zeroRows, false, sizeof(zeroRows));
    memset(zeroColumns, false, sizeof(zeroColumns));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            if(!zeroMatrix[i][j]) {
                zeroRows[i] = true;
                zeroColumns[j] = true;
            }
        }
    }

    // Nullify Rows
    for (int i = 0; i < row; ++i) {
        if(zeroRows[i]) {
            for (int j = 0; j < column; ++j) {
                zeroMatrix[i][j] = 0;
            }
        }
    }

    // Nullify Columns
    for (int i = 0; i < column; ++i) {
        if(zeroColumns[i]) {
            for (int j = 0; j < row; ++j) {
                zeroMatrix[j][i] = 0;
            }
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << zeroMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int row, column;
    cin >> row >> column;

    ZeroMatrix(row, column);
}


/*

Input:
3 3
1 1 1
1 0 1
1 1 0

Output:
1 0 0 
0 0 0 
0 0 0

*/
