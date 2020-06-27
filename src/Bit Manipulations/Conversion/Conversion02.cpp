#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void Conversion() {
    ll num1, num2;
    cin >> num1 >> num2;

    ll oddCnt = 0;
    for (ll i = num1 ^ num2; i != 0; i = i & (i - 1)) {
        oddCnt ++;
    }

    cout << oddCnt << endl;
}

int main() {

    Conversion();

}
