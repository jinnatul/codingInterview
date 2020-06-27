#include<bits/stdc++.h>

using namespace std;

int SearchInRotatedArray(int arr[], int lw, int high, int findNum)
{
    if(lw > high) return -1;
    int mid = (lw + high)/2;
    if(arr[mid] == findNum) return mid;

    if(arr[lw] <= arr[mid]) {
        if(findNum >= arr[lw] && findNum <= arr[mid])
            return SearchInRotatedArray(arr, lw, mid - 1, findNum);
        return SearchInRotatedArray(arr, mid + 1, high, findNum);
    }

    if(findNum >= arr[mid] && findNum <= arr[high])
        return SearchInRotatedArray(arr, mid + 1, high, findNum);

    return SearchInRotatedArray(arr, lw, mid - 1, findNum);

}

int main() {

    int num;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; ++i) {
        cin >> arr[i];
    }
    int findNum;
    cin >> findNum;
    ll pos = SearchInRotatedArray(arr, 0, num - 1, findNum);

    if(pos != -1) cout << pos << endl;
    else cout << "Not Here..." << endl;

}
