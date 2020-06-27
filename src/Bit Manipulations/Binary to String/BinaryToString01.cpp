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
    while (num > 0) {
        if(ans.length() >= 32) {
            cout << "Error" << endl;
            return;
        }

        double current = num * 2;
        if(current >= 1) {
            ans += "1";
            num = current - 1;
        }
        else {
            ans += "0";
            num = current;
        }
    }

    cout << ans << endl;
}

int main() {

    BinaryToString();

}
