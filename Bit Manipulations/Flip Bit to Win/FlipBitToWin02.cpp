#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll numToBinary(ll num) {
    string ans = "";
    while (num != 0) {
        if(num % 2) ans += "1";
        else ans += "0";
        num /= 2;
    }
    rev(ans);
    return ans.length();
}

void FlipBitToWin() {
    ll num;
    cin >> num;

    // If all 1s, so it's long length
    if(~num == 0) {
        cout << numToBinary(num) << endl;
        return;
    }

    ll currentLength = 0, preViousLength = 0, maxLength = 1;

    while (num != 0) {
        if ((num & 1) == 1) currentLength++; // current bit is 1
        else {
            preViousLength = (num & 2) == 0 ? 0 : currentLength;
            currentLength = 0;
        }
        maxLength = max(maxLength, preViousLength + currentLength + 1);
        num >>= 1;
    }
    
   cout << maxLength << endl;
}

int main() {

    FlipBitToWin();

}
