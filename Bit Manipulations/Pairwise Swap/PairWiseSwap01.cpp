#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void PairWiseSwap() {
    ll num;
    cin >> num;

    num = ((num & 0xaaaaaaaa) >> 1) | ((num & 0x55555555) << 1);

    cout << num << endl;
}

int main() {

    PairWiseSwap();

}
