**Contents**

- [Question](#question)
  - [Example](#example)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Explanation and Solution in CPP](#explanation-and-solution-in-cpp)
- [Complexity](#complexity)
  
## Question 
*You are given two sorted array **A** and **B** where **A** has a large enough buffer at the end to hold **B**. Write a method to merge **B** into **A** in sorted order*

### Example 
```
A = [10, 12, 13, 14, 16, NaN, NaN, NaN, NaN, NaN]
B = [5, 6, 7, 8, 9]
result = [5, 6, 7, 8, 9, 10, 12, 13, 14, 16]
```
## Solution and Explanation in JavaScript

[Code here](/Sorting%20and%20Searching/Sorted%20Merge/SortedMerge.js)

One way is to merge the two arrays by inserting the smaller elements to front of `array1`, but the issue with this approach is that we have to shift every element to right after every insertion. <br>
So, instead from comparing which one is smaller element, we can compare which one is larger and then inserting that element to end of A. <br>
In solution we make a function which takes two arrays, and length of two arrays. We take a variable `lastIndex` which indicates last position of the total number of array size. <br>
Now we use a while loop to loop through until the `secondArrayElements` is 0. Now we check if i is greater than 0 means i has enough space to hold elements from `array2` and if element from the `array1` is greater than `array2`. It the condition is true then we will store the element in the last index -
```
 array1[lastIndex] = array1[i]
 ```
 then we will decrease i by 1. If the above condtion is not true then it means element from the `array2` is bigger. So, in else stateemnt we store element from the `array2` and decrease j by 1. After that we will decrease `lastIndex` varialbe by 1 as the biggest value is in the last position. <br>
 We make another function named `PrintArray` to print the final array.

 ## Explanation and Solution in CPP
 
- Solution 1
```
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
```

- Solution 2
```
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

```

 ## Complexity 

 **Runtime Complexity**: O(n+m)
