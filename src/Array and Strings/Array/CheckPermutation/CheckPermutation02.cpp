#include<bits/stdc++.h>

using namespace std;

int cntChar[128];

int convertNum (char ch) {
    int charToNumAsc;
    if(ch >= 'a' && ch <= 'z')
        charToNumAsc = ch - 'a';
    else if(ch >= 'A' && ch <= 'Z')
        charToNumAsc = ch - 'A';
    else if(ch >= '0' && ch <= '9')
        charToNumAsc = ch - '0';
    return charToNumAsc;
}

bool checkPermutation(string str1, string str2)
{
    int ln1 = str1.length();
    int ln2 = str2.length();
    if(ln1 != ln2) return false;

    for (int i = 0; i < ln1; ++i) {
        cntChar[convertNum(str1[i])]++;
    }

    for (ll i = 0; i < ln2; ++i) {
        int temp = convertNum(str2[i]);
        cntChar[temp]--;
        if(cntChar[temp] < 0) return false;
    }

    return true;
}

int main() {

    cout << checkPermutation("abc", "bac") << endl;
    cout << checkPermutation("abc", "dar") << endl;
}
