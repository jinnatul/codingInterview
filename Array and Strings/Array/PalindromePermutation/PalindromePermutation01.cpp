#include<bits/stdc++.h>

using namespace std;

bool PalindromePermutation(string str)
{
    int ln = str.length();
    map <char, int> mpp;
    map <char, int>::iterator it;

    for (int i = 0; i < ln; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
            mpp[str[i]]++;
        }
    }

    ll oddCnt = 0;
    for (it = mpp.begin(); it != mpp.end(); it++) {
        ll temp = it->second;
        if(temp & 1) oddCnt++;
    }

    if(oddCnt < 2) return true;
    return false;
}

int main() {

    cout << PalindromePermutation("taco cat") << endl;
    cout << PalindromePermutation("taco catf") << endl;
}
