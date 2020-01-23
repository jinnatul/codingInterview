## Question: You have an integer and you can flip exactly one bit from a 0 to a 1. Write code to find the length of the longest sequence of 1s you could create.
**Example**
```
Input: 1775 (or : 11011101111)
Output: 8 
```

[Solution in JavaScript]()

**Explanation**
The main goal of this problem is to find any 0 which we can flip and the total number of 1 is the highest number until the other 0 is found. <br>
Now to solve this problem we make a function named fliBitToWin which takes one parameter `number`. Now we need to convert the number into binary format (`let binaryString = number.toString(2)`). In binary format the result will look like this -
```
11011101111
```
Then we split the binary string with `0` (`split('0')`). After splitting the string will look like this - 
```
11,111,1111
```
Now we take a variable `longest` and set it to `0`. Now we do a for loop which starts from 0 and goes up to `arrOnes - 1` time. <br>

Now `if(arrOnes[i].length + arrOnes[i+1].length > longest)` for the first iteration this line gives `2 + 3` which is the number of 1s after splitting the string with 0. Store the summation in `longest` variable. When the loop is over we increase longest variable by 1 and return it. <br>

### Complexity

**Runtime Complexity**: O(n)
**Space Complexity**: O(n)