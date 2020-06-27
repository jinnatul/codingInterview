#include<bits/stdc++.h>

using namespace std;

bool StringRotation(string first, string second) {

    first += first;
    int ln = second.size();

    auto it = search(first.begin(), first.end(), second.begin(), second.end()) != first.end();

    if(it) return true;
    return false;
}

int main() {

    cout << StringRotation("abcd", "bdca") << endl;
    cout << StringRotation("waterbottle", "erbottlewat") << endl;
}
