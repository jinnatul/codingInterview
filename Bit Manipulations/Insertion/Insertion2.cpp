#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void Insertion1(string num1, string num2, ll i, ll j) {
    ll dif = abs(i - j);
    if(dif + 1 != num2.length()) {
        cout << "Insert Problem..." << endl;
        return;
    }

    ll startPos = num1.length() - i - 1;
    for (ll pos = startPos; pos > startPos - j + 1; pos--) {
        num1[pos] = num2[dif--];
    }

    cout << num1 << endl;
}

int main() {

    ll n, m, num, tc, t = 1;

    string num1, num2;
    ll i, j;

    cin >> num1 >> num2 >> i >> j; // Only 0 or 1 Binary numbers
    Insertion1(num1, num2, i , j);

}
