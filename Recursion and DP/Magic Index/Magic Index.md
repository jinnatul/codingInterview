**Contents**

- [Question](#question)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)


## Question
    
   Magic Index: A magic index in an array A[1...n-1] is defined to be an index such A[i] = i. Given a sorted array of 
   distinct integers. Write a method to find a magic index, if one extists, in array A.
 ```
 Input:  4
         1 2 3 4
 Output: Not Here
 
 Input:  4
         1 2 3 3
 Output: We Find out magic Index is: 3
 
 ```
 
## Solution and Explanation in JavaScript

- Linear Solution
- Recursive Solution

    ### Code Here
      * []()
      * []()

    
## Solution and Explanation in CPP

- Linear Solution
```
void MagicIndex()
{
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
```

- Recursive Solution 1

```
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

```

- Recursive Solution 2

```
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

```

  ### Code Here
    * [Linear](/Recursion%20and%20DP/Magic%20Index/MagicIndex01.cpp)
    * [Recursive 1](/Recursion%20and%20DP/Magic%20Index/MagicIndex02.cpp)
    * [Recursive 2](/Recursion%20and%20DP/Magic%20Index/MagicIndex03.cpp)

## Complexity
- Linear C++ O(n)
- Recursive 1 C++ O(log(n))
- Recursive 2 C++ O(log(n))
