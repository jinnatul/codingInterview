## Question: Write an algorithm such that if an element in an MxN matrix is 0, its entire row and column are set to 0

#### Example 
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

[Solution in JavaScript](https://link)

For this problem we need to mark the `0` in the matrix where they occured. Then we need to change respected columns and rows wtih 0 where first `0` is occured. <br>
First we take two boolean variable `colZero` and `rowZero` and set them to false. Then we take two integer variable which will store the row and column of the matrix. <br>
