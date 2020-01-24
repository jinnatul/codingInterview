#include<bits/stdc++.h>

using namespace std;

string StringCompression(string str) {
    int ln = str.length(), cnt = 1, pos = 0;
    string newStr;
    for (int i = 0; i < ln; ++i) {
        if(str[i] == str[i + 1]) cnt++;
        else {
            string temp = str[i] + to_string(cnt);
            newStr.append(temp);
            cnt = 1;
        }
    }
    return (ln < newStr.length()) ? str : newStr;
}

int main() {

    cout << StringCompression("aaaabbbccdeed") << endl;
}
