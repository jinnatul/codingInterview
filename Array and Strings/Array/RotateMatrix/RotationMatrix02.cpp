#include<bits/stdc++.h>

using namespace std;


void RotationMatrix(int row, int column) {
    
    int matrix[row][column];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cin >> matrix[i][j];
        }
    }

    for (int layer = 0; layer < row / 2; ++layer) {
        int first = layer;
        int last = row - 1 - layer;

        for (int i = first; i < last; ++i) {
            int offSet = i - first;
            int top = matrix[first][i]; //save top

            // left -> top
            matrix[first][i] = matrix[last - offSet][first];

            // bottom -> left
            matrix[last - offSet][first] = matrix[last][last - offSet];

            // right -> bottom
            matrix[last][last - offSet] = matrix[i][last];

            // top -> right
            matrix[i][last] = top;

        }
    }

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {

    int row, column;
    cin >> row >> column;

    RotationMatrix(row, column);
}
