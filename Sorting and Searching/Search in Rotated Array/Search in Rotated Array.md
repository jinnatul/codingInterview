**Contents**
- [Question](#question)
  - [Example](#example)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)
  

## Question
*Given a sorted array of n integers that has been rotated an unknown number of times. Write code to find an element in the array. You may assume that the array was originally sorted in increasing order*

### Example
```
Input: find 5 in [15, 16 , 19 , 20 , 25 , 1, 3, 4, 5, 7, 1 0 , 14]
Output: 8 (the index of 5 in the array)
```
## Solution and Explanation in JavaScript
[View code](SearchInRotatedArray.js)

There can be various approaches to solve the problem. One may like 
- Find the minimum number of the array.
- If the minimum number is the desired number then return true
- As left side of the minimum number and right side of the minimum number are sorted, so we can pass the array from the minimum number to the last in a binary search method. 
- If the desired number is found then return true. 
- If not found then we can pass all the elements of the left side and search for the desired number. If found then return true
- If the number is not found then return false

## Solution and Explanation in CPP

## Complexity
**Runtime Complexity**: For the worst case scenario the complexity of [this](#solution-and-explanation-in-javascript) solution is O(n). And for best case complexity is O(log n)


