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

ll BinaryToNum(string str) {
    ll pos = str.length() - 1, ans = 0, num = 1;

    while (pos >= 0) {
        if(str[pos] == '1') ans += num;
        num *= 2;
        pos--;
    }
    return ans;
}

void PairWiseSwap() {
    ll num;
    cin >> num;
    string temp = numToBinary(num), str = "";
    if(temp.length() & 1) str += "0";
    str += temp;

    for (ll i = 0; i < str.length() - 1; ++i) {
        swap(str[i], str[i + 1]);
        i++;
    }

    num = BinaryToNum(str);
    cout << num << endl;
}

int main() {

    PairWiseSwap();

}
