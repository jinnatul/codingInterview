#include<bits/stdc++.h>

using namespace std;

void SortedMerge()
{
    int num1, num2, num;
    cin >> num1;

    vector <int> vc;
    for (int i = 0; i < num1; ++i) {
        cin >> num;
        vc.push_back(num);
    }

    cin >> num2;
    for (int i = 0; i < num2; ++i) {
        cin >> num;
        vc.push_back(num);
    }
    sort(vc.begin(), vc.end());

    for (int i = 0; i < vc.size(); ++i) {
        cout << vc[i] << " ";
    }
}

int main() {

    SortedMerge();

}
