#include<bits/stdc++.h>

using namespace std;

int cntChar[128];

bool isUnique(string str)
{
    int ln = str.length();

    for (int i = 0; i < ln; ++i) {
        int charToNumAsc;
        if(str[i] >= 'a' && str[i] <= 'z')
            charToNumAsc = str[i] - 'a';
        else if(str[i] >= 'A' && str[i] <= 'Z')
            charToNumAsc = str[i] - 'A';
        else if(str[i] >= '0' && str[i] <= '9')
            charToNumAsc = str[i] - '0';

        cntChar[charToNumAsc]++;
        if(cntChar[charToNumAsc] > 1) return false;
    }

    return true;
}

int main() {
    cout << isUnique("abcde") << endl;
    cout << isUnique("aaaa") << endl;
}
