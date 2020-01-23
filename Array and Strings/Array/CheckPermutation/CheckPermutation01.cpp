#include<bits/stdc++.h>

using namespace std;

bool checkPermutation(string str1, string str2)
{
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2) return true;

    return false;
}

int main() {

    cout << checkPermutation("abc", "bac") << endl;
    cout << checkPermutation("abc", "dar") << endl;
}
