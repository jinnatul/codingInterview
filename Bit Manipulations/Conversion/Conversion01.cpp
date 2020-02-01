#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void Conversion() {
    ll num1, num2;
    cin >> num1 >> num2;

    ll cnt = 0;
    for (ll i = num1 ^ num2; i != 0; i >>= 1) {
        cout << i << endl;
        cnt += (i & 1);
    }

    cout << cnt << endl;
}

int main() {

    Conversion();

}
