#include<bits/stdc++.h>

using namespace std;

bool OneAway(string str1, string str2)
{
    int ln1 = str1.length();
    int ln2 = str2.length();

    if(abs(ln1 - ln2) > 1) return false;

    string big = ln1 < ln2 ? str1 : str2;
    string small = ln1 < ln2 ? str2 : str1;

    ll pos1 = 0, pos2 = 0;
    bool findDifference = false;

    while (pos2 < small.length() && pos1 < big.length()) {
        if(small[pos2] != big[pos1]) {
            if (findDifference) return false;
            findDifference = true;
            if(small.length() == big.length()) pos1++;
        }
        else pos1++;
        pos2++;
    }

    return true;
}

int main() {

    cout << OneAway("pale", "ple") << endl;
    cout << OneAway("pale", "bake") << endl;
    cout << OneAway("pales", "pale") << endl;
    cout << OneAway("pale", "bale") << endl;
}
