#include<bits/stdc++.h>

using namespace std;

void BinaryToString() {
    double num;
    cin >> num;

    if(num > 1 || num < 0) {
        cout << "Error" << endl;
        return;
    }

    string ans = ".";
    double fractionVal = 0.5;
    while (num > 0) {
        if(ans.length() >= 32) {
            cout << "Error" << endl;
            return;
        }

        if(num >= fractionVal) {
            ans += "1";
            num -= fractionVal;
        }
        else {
            ans += "0";
        }
        fractionVal /= 2;
    }

    cout << ans << endl;
}

int main() {

    BinaryToString();

}
