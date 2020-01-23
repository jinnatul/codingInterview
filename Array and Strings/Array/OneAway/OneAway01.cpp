#include<bits/stdc++.h>

using namespace std;

int cntChar[27];

bool OneAway(string str1, string str2)
{
    int ln1 = str1.length();
    int ln2 = str2.length();

    if(abs(ln1 - ln2) > 1) return false;

    if(str1 == str2) return true;
    memset(cntChar, 0, sizeof(cntChar));

    string big, small;
    if(ln1 >= ln2) {
        big = str1;
        small = str2;
    }
    else {
        big = str2;
        small = str1;
    }

    for (int i = 0; i < big.size(); i++) {
        if(big[i] >= 'a' && big[i] <= 'z'){
            cntChar[big[i] - 'a']++;
        }
        else if(big[i] >= 'A' && big[i] <= 'Z'){
            big[i] = tolower(big[i]);
            cntChar[big[i] - 'a']++;
        }
    }

    for (int i = 0; i < small.length(); ++i) {
        if(small[i] >= 'a' && small[i] <= 'z'){
            cntChar[small[i] - 'a']--;
        }
        else if(small[i] >= 'A' && small[i] <= 'Z'){
            small[i] = tolower(small[i]);
            cntChar[small[i] - 'a']--;
        }
    }

    ll cnt = 0;
    for (int i = 0; i < 27; ++i) {
        if(cntChar[i] != 0) cnt++;
        if(cnt > 2) return false;
    }

    return true;
}

int main() {

    cout << OneAway("pale", "ple") << endl;
    cout << OneAway("pale", "bake") << endl;
    cout << OneAway("pales", "pale") << endl;
    cout << OneAway("pale", "bale") << endl;
}
