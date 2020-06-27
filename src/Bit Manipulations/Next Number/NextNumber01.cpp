#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void NextNumber() {
    ll num;
    cin >> num;

    ll cnt = num, cnt0 = 0, cnt1 = 0;
    while (((cnt & 1) == 0) && (cnt != 0)) {
        cnt0 ++;
        cnt >>= 1;
    }

    while ((cnt & 1) == 1) {
        cnt1 ++;
        cnt >>= 1;
    }

    ll pos = cnt0 + cnt1; // Position of rightmost non-trailing Zero
    if (pos >= 31 || pos <= 0) {
        cout << -1 << endl;
        return;
    }

    num |= (1 << pos); // Flip rightmost non-trailing zero
    num &= ~((1 << pos) - 1); // Clear all bits to the right of position
    num |= (1 << (cnt1 - 1)) - 1; // Insert cnt1 - 1 ones on the rights

    cout << num << endl;
}

int main() {

    NextNumber();

}
