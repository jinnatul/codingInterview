#include<bits/stdc++.h>

using namespace std;

void MagicIndex()
{
    int num;
    cin >> num;
    int A[num];
    for (int i = 0; i < num; ++i) {
        cin >> A[i];
    }

    bool ok = false;
    int pos = -1;
    for (int i = 0; i < num; ++i) {
        if(A[i] == i) {
            ok = true;
            pos = i;
            break;
        }
    }
    if(ok) cout << "We Find out magic Index is: " << pos << endl;
    else cout << "Not Here" << endl;
}

int main() {

    MagicIndex();

}
