#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void Debugger() {
    ll num;
    cin >> num;

    for (ll i = 1; i <= num; ++i) {
        cout << ((i & (i - 1)) == 0) << endl;
    }
}

int main() {

    Debugger();

}
