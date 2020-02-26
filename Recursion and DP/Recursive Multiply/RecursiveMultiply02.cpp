#include<bits/stdc++.h>

using namespace std;

int dp[10000];
int Recursive_Multiply(int num1, int num2)
{
    if(num1 == 0) return 0;
    else if (num1 == 1) return num2;
    else if(dp[num1] > 0)
        return dp[num1];

    // num1 / 2
    int mid = num1 >> 1;
    int side1 = Recursive_Multiply(mid, num2);
    int side2 = side1;
    if (num1 & 1) side2 = Recursive_Multiply(num1 - mid, num2);

    return dp[num1] = side1 + side2;
}

int main() {

    int num1, num2;
    cin >> num1 >> num2;
    num1 = min(num1, num2);
    num2 = max(num1, num2);

    cout << Recursive_Multiply(num1, num2) << endl;
}
