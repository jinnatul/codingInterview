#include<bits/stdc++.h>

using namespace std;

string URLify(string str)
{
    int ln = 0;

    for (int i = str.length() - 1; i >= 0; i--) {
        if((str[i] >= 'a' && str[i] <= 'z')
        || (str[i] >= 'A' && str[i] <= 'Z')
        || (str[i] >= '0' && str[i] <= '9')) {
            ln = i;
            break;
        }
    }

    string ans = "";
    for (int i = 0; i <= ln; ++i) {
        if(str[i] == ' ') ans += "%20";
        else ans += str[i];
    }

    return ans;
}

int main() {

    cout << URLify("Mr 3ohn Smith") << endl;
    cout << URLify("Mr 3ohn Smith   ") << endl;
}
