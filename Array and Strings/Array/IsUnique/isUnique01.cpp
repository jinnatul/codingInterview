#include<bits/stdc++.h>

using namespace std;

bool isUnique(string str)
{
    map <char, int> mpp;
    map <char, int>::iterator it;
    int ln = str.length();

    for (int i = 0; i < ln; ++i) {
        mpp[str[i]]++;
    }

    for (it = mpp.begin(); it != mpp.end(); it++) {
        if(it->second > 1) return false;
    }
    return true;
}

int main() {

    cout << isUnique("abcde") << endl; //true
    cout << isUnique("aaaa") << endl; //false
}
