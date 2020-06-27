#include<bits/stdc++.h>

using namespace std;

int MagicIndex(int A[], int start, int end)
{
    if (end < start) return -1;
    int midIndex = (start + end)/2;
    int midValue = A[midIndex];

    if (midValue == midIndex)
        return midIndex;

    /* Search Left Side */
    int leftIndex = min(midIndex - 1, midValue);
    int leftPos = MagicIndex(A, start, leftIndex);
    if (leftPos >= 0) return leftPos;

    /* Search Right Side */
    int rightIndex = max(midIndex + 1, midValue);
    int rightPos = MagicIndex(A, rightIndex, end);
    return rightPos;
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
