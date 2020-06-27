#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

string numToBinary(ll num) {
    string ans = "";
    while (num != 0) {
        if(num % 2) ans += "1";
        else ans += "0";
        num /= 2;
    }
    rev(ans);
    return ans;
}

void FlipBitToWin() {
    ll num;
    cin >> num;
    string str = numToBinary(num);
    ll ans = 0, temp = 0, zeroCnt = 0, firstZero = 0;

    cout << str << endl;
    for (ll i = 0; i < str.length(); ++i) {
        if(str[i] == '0') {
            zeroCnt++;
            if (zeroCnt == 1){
                firstZero = i;
            }
            else {
                zeroCnt = 0;
                ans = max(ans, temp);
                temp = i - firstZero;
            }
        }
        if(str[i] == '1')
            temp++;
    }
    ans = max(ans, temp);

    cout << ans << endl;
}

int main() {

    FlipBitToWin();

}
