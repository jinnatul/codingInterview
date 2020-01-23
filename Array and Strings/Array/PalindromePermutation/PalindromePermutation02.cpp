#include<bits/stdc++.h>

using namespace std;

int cntChar[27];

bool PalindromePermutation(string str)
{
    int ln = str.length();
    memset(cntChar, 0, sizeof(cntChar));

    for (int i = 0; i < ln; i++) {
        if(str[i] >= 'a' && str[i] <= 'z'){
            cntChar[str[i] - 'a']++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = tolower(str[i]);
            cntChar[str[i] - 'a']++;
        }
    }
    
    ll oddCnt = 0;
    for (ll i = 0; i < 27; ++i) {
        if(cntChar[i] & 1) oddCnt++;
    }

    if(oddCnt < 2) return true;
    return false;
}

int main() {

    cout << PalindromePermutation("taco cat") << endl;
    cout << PalindromePermutation("taco catf") << endl;
}
