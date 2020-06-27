#include<bits/stdc++.h>

using namespace std;

bool StringRotation(string first, string second) {

    first += first;
    int ln = second.size();

    for (int i = 0; i <= first.size() - ln; ++i) {
        string subStr = first.substr(i, ln);
        if (subStr == second) return true;
    }

    return false;
}

int main() {

    cout << StringRotation("abcd", "bdca") << endl;
    cout << StringRotation("waterbottle", "erbottlewat") << endl;
}
