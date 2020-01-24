#include<bits/stdc++.h>

using namespace std;

string StringCompression(string str) {
    int ln = str.length(), cnt = 1, pos = 0;
    string temp = "";
    for (int i = 0; i < ln; ++i) {
        if(str[i] == str[i + 1]) cnt++;
        else {
            temp += str[i];
            string cntNum = to_string(cnt);
            temp += cntNum;
            cnt = 1;
        }
    }
    return (ln < temp.length()) ? str : temp;
}

int main() {

    cout << StringCompression("aaaabbbccdee") << endl;
}
