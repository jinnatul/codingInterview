**Contents**

- [Question](#question)
  - [Example](#example)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)

## Question
*Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0*

### Example 
```
Input: 
[
  [1,1,1],
  [1,0,1],
  [1,1,1]
]
Output: 
[
  [1,0,1],
  [0,0,0],
  [1,0,1]
]
```

## Solution and Explanation in JavaScript

[View code](/Array%20and%20Strings/Array/ZeroMatrix/ZeroMatrix.js)

For this problem we need to mark the `0` in the matrix where they occured. Then we need to change respected columns and rows wtih 0 where first `0` is occured. <br>
First we take two boolean variable `colZero` and `rowZero` and set them to false. Then we take two integer variable which will store the row and column of the matrix. <br>
Then we need to use a for loop to check in which column `0` is occured. If `0` is found then set `true` instead of `0` `colZero = true`. We do the same for the row. <br>
Now we need to specify which column and row we need to make 0. So we have to iterate the whole matrix and set them to `0`. 

```
for(let i = 0; i < row; i++)
    {
        for(let j = 0; j < col; j++)
        {
            if(matrix[i][j] === 0)
            {
                matrix[0][j] = 0
                matrix[i][0] = 0
            }
        }
    }
```
Here, by `matrix[0][j] = 0` we are using first row to mark column that we have to make `0` the j'th column. And by `matrix[i][0] = 0` we are using first column to mark row that we have to make `0`. <br>

Now we again need to iterate through the matrix.
```
    for(let i = 1; i < row; i++)
    {
        for(let j = 1; j < col; j++)
        {
            if(matrix[0][j] ===  0 || matrix[i][0] === 0)
            {
                matrix[i][j] = 0
            }
        }
    }
```
Now we are iterating from the second row and column to the last. Now we are checking if the first row has `0` for column `j` or first column has `0` for row `i`. If thats the case then we have to set the row and column to `0`. <br>

Now we set `0` to the specified rows and columns. For this we do this - 
```
for(let i = 0; i < row; i++)
    {
        for(let j = 0; j < col; j++)
        {
            if(colZero)
            {
                matrix[0][j] = 0
            }
            if(rowZero)
            {
                matrix[j][0] = 0
            }
        }
    }
```

We iterate through the whole matrix and find which specific state is true and set that row / column to `0`. <br>
At last we return the matrix. 

## Solution and Explanation in CPP

[View code](/Array%20and%20Strings/Array/ZeroMatrix/ZeroMatrix01.cpp)

## Complexity

**Runtime Complexity**: O(m*n) <br>
**Space Complexity**: O(1)