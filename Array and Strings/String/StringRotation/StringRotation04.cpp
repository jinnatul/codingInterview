#include<bits/stdc++.h>

using namespace std;

bool StringRotation(string first, string second) {

    first += first;

    if(strstr(first.c_str(), second.c_str()))
        return true;
    return false;
}

int main() {

    cout << StringRotation("abcd", "bdca") << endl;
    cout << StringRotation("waterbottle", "erbottlewat") << endl;
}
