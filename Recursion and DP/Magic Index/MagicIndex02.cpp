#include<bits/stdc++.h>

using namespace std;

int MagicIndex(int A[], int start, int end)
{
    if (end < start) return -1;
    int mid = (start + end)/2;

    if (A[mid] == mid)
        return mid;
    else if (A[mid] < mid)
        return MagicIndex(A, start, mid - 1);
    else
        return MagicIndex(A, mid + 1, end);
}

int main() {

    int num;
    cin >> num;
    int A[num];
    for (int i = 0; i < num; ++i) {
        cin >> A[i];
    }

    int ans = MagicIndex(A, 0, num - 1);
    if (ans != -1)
        cout << "We Find out magic Index is: " << ans << endl;
    else
        cout << "Not Here" << endl;


}
