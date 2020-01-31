#include<bits/stdc++.h>

using namespace std;

/*** Typedef ***/
typedef long long ll;

int Insertion1(ll num1, ll num2, ll i, ll j) {
    //will equal sequence of all 1s
    ll allOne = ~0;

    // 1s before position j, then 0s.
    ll left = allOne << (j + 1);

    // 1s after position i.
    ll right = (1 << i) - 1;

    // All 1s, except for 0s between i and j.
    ll mask = left | right;

    // clear bits j through i then put num2 in there
    ll n_Cleared = num1 & mask; // clear bit j through i
    ll m_Shifted = num2 << i; // move num2 into current position

    return n_Cleared | m_Shifted;
}

int main() {

    ll num1, num2, i, j;

    cin >> num1 >> num2 >> i >> j;
    cout << Insertion1(num1, num2, i , j) << endl;

}
