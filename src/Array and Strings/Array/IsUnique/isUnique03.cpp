#include<bits/stdc++.h>

using namespace std;

bool isUnique(string str)
{
    int ln = str.length();

    sort(str.begin(), str.end());

    for (int i = 1; i < ln; ++i) {
        if(str[i] == str[i - 1]) return false;
    }
    return true;
}

int main() {

    cout << isUnique("abcde") << endl;
    cout << isUnique("aaaa") << endl;
}
