#include<bits/stdc++.h>

using namespace std;

void SortedMerge()
{
    int num1, num2;
    cin >> num1;
    int arr1[num1];
    for (int i = 0; i < num1; ++i)
        cin >> arr1[i];

    cin >> num2;
    int arr2[num2];
    for (int i = 0; i < num2; ++i)
        cin >> arr2[i];

    int mergeIndex = num1 + num2 - 1, total = mergeIndex;
    int indexA = num1 - 1, indexB = num2 - 1;

    while (indexB >= 0) {
        if(indexA >= 0 && arr1[indexA] > arr2[indexB]) {
            arr1[mergeIndex] = arr1[indexA];
            indexA--;
        }
        else {
            arr1[mergeIndex] = arr2[indexB];
            indexB--;
        }
        mergeIndex--;
    }

    for (int i = 0; i <= total; ++i) {
        cout << arr1[i] << " ";
    }
}

int main() {

    SortedMerge();

}
