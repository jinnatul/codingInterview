#include<bits/stdc++.h>

using namespace std;

int Recursive_Multiply(int num1, int num2)
{
    if(num1 == 0) return 0;
    else if (num1 == 1) return num2;

    // num1 / 2
    int mid = num1 >> 1;
    int side1 = Recursive_Multiply(mid, num2);

    if (num1 % 2 == 0) return side1 + side1;
    else return side1 + side1 + num2;
}

int main() {

    int num1, num2;
    cin >> num1 >> num2;
    num1 = min(num1, num2);
    num2 = max(num1, num2);

    cout << Recursive_Multiply(num1, num2) << endl;

}
