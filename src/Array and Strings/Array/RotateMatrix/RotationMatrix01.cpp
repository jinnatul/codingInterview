#include<bits/stdc++.h>

using namespace std;

void RotationMatrix(int row, int column) {
    int matrix[row][column], ansMatrix[row][column];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < column; ++i) {
        int col = 0;
        for (int j = row - 1; j >= 0; j--) {
            ansMatrix[i][col++] = matrix[j][i];
        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << ansMatrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int row, column;
    cin >> row >> column;

    RotationMatrix(row, column);
}
