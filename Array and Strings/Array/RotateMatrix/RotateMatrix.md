## Question: Given an image represented by an NxN matrix, where each pixel in the image is 4 bytes. Write a method to rotate the image by 90 degrees. Can you do this in place?


- [Solution in C++](/Array%20and%20Strings/Array/RotateMatrix/RotationMatrix01.cpp)
- [Solution in C++](/Array%20and%20Strings/Array/RotateMatrix/RotationMatrix02.cpp)
- [Solution in JavaScript](/Array%20and%20Strings/Array/RotateMatrix/RotationMatrix.js)


The approach to solve this problem in place is a little bit tricky. We will try to discuss it here. <br>

Lets assume we have a matrix like this -

<img
src="/Array%20and%20Strings/Array/RotateMatrix/img/rotatematrix1.PNG"
raw=true
alt="actual matrix"
/>

Our goal is to rotate the matrix in 90 degree clockwise. Like this -

<img
src="/Array%20and%20Strings/Array/RotateMatrix/img/rotatematrix2.PNG"
raw=true
alt="actual matrix"
/>

**Approach**

First row of source -> First column of destination, elements filled in opposite order <br>
second row of source -> second column of destination, elements filled in opposite order <br>
so...on <br>
Last row of source -> last column of destination, elements filled in opposite order. 
<br>
An NxN matrix will have floor(n/2) square cycles. For example, a 4x4 matrix will have 2 cycles. The first cycle is formed by its first row, last column, last row and first column. The second cycle is formed by second row, second-last column, second-last row and second column. A 3x3 matrix will have 1 cycle. The cycle is formed by its first row, last column, last row and first column.  <br>
The idea for each square cycle, we swap the elements involeved with the corresponding cell in teh matrix in clockwise direction from left to top, top to right, right to bottom and from bottom to left one at a time. We use temporary variable to achieve this. 
<br>

**Explanation** <br>

Let size of row and column be 3.
During first iteration –
a[i][j] = Element at first index (leftmost corner top)= 1.

a[j][n-1-i]= Rightmost corner top Element = 3.

a[n-1-i][n-1-j] = Righmost corner bottom element = 9.

a[n-1-j][i] = Leftmost corner bottom element = 7.

Move these elements in the clockwise direction.

During second iteration –
a[i][j] = 2.

a[j][n-1-j] = 6.

a[n-1-i][n-1-j] = 8.

a[n-1-j][i] = 4.
Similarly, move these elements in the clockwise direction.

```
for (int layer = 0; layer < row / 2; ++layer) {
    int first = layer;
    int last = row - 1 - layer;

    for (int i = first; i < last; ++i) {
        int offSet = i - first;
        int top = matrix[first][i]; //save top

        // left -> top
        matrix[first][i] = matrix[last - offSet][first];

        // bottom -> left
        matrix[last - offSet][first] = matrix[last][last - offSet];

        // right -> bottom
        matrix[last][last - offSet] = matrix[i][last];

        // top -> right
        matrix[i][last] = top;

    }
}
```

### Complexity

**Runtime Complexity**: O(n^2) <br>
**Space Complexity**: O(1)
