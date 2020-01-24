#include<bits/stdc++.h>

using namespace std;

bool StringRotation(string first, string second) {
    first += first;
    if(first.find(second) != string::npos) return true;
    return false;
}

int main() {

    cout << StringRotation("abcd", "bdca") << endl; // False
    cout << StringRotation("waterbottle", "erbottlewat") << endl;  // True
}
