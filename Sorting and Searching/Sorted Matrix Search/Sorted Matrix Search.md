**Contents**
- [Question](#question)
  - [Example](#example)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)
  

## Question 
*Given an MxN matrix in which each row and  each column is sorted in ascending order. Write a method to find a element*

### Example

```
Input : mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
              x = 29
Output : Found at (2, 1)
```

## Solution and Explanation in JavaScript

[View code](/Sorting%20and%20Searching/Sorted%20Matrix%20Search/SortedMatrixSearch.js)

To solve this problem, there are three possible cases - 
1. The number we are searching for is greater than the current number. This will ensure, that all the elements in the current rwo is smaller than the number we are searching for as we are already at the right most element and the row is sorted. Thus, the entire row gets eliminated and we continue our search on the next row. 
2. The number we are searching for is smaller than the current number. This will  ensure, that all the elements in the current column is greater than the number we are searching for. Thus, the entire column gets eliminated and we continue our search on the previous column i.e. the column at the immediate left. 
3. The number we are searching for is equal to current number. This will end our search.

First we make a function named as search which takes three parameters `matrix`, `n`, `number`. 
Now take two variables i and j and intiate them 0 and n - 1 respectively. Here `i` represents as row and `j` represents as column. Now we use a loop that run until `i` is less than `n` and `j` is greater than or equal to 0. <br>
If `matrix[i][j]` equals the searching number then we return console.log the index of the element. If `matrix[i][j]` is greater than number then decrease `j` by 1. If `matrix[i][j]` less than the number then increase `i` by 1. <br>
In our case for the first iteration i = 0 and j = 3. So matrix[i][j] returns the right most element which is in our array is 4. 4 is less than our desired searching element 7. So it is not in first row. We increase i by 1 and now i = 1 and j = 3. So in the second iteration matrix[i][j] returns the right most element which is 8. Now 8 is greater than 7. So our desired element is in the current row. So we decrease column j by 1. And BOOM. We get our result. 

## Solution and Explanation in CPP


## Complexity 
**Runtime Compleixty**: O(n)