**Contents**

- [Question](#question)
    - [Example](#example)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
  - [Functions](#functions)
- [Complexity](#complexity)

## Question
*You have an integer and you can flip exactly one bit from a 0 to a 1. Write code to find the length of the longest sequence of 1s you could create.*
#### Example
```
Input: 1775 (or : 11011101111)
Output: 8 
```
## Solution and Explanation in JavaScript

- [View code](/src/Bit%20Manipulations/Flip%20Bit%20to%20Win/FlipBitToWin.js)

The main goal of this problem is to find any 0 which we can flip and the total number of 1 is the highest number until the other 0 is found. <br>

Now to solve this problem we make a function named `FliBitToWin` which takes one parameter `number`. Now we need to convert the number into binary format (`let binaryString = number.toString(2)`). In binary format the result will look like this -
```
11011101111
```
Then we split the binary string with `0` (`split('0')`). After splitting the string will look like this - 
```
11,111,1111
```
Now we take a variable `longest` and set it to `0`. Now we do a for loop which starts from 0 and goes up to `arrOnes - 1` time. <br>

Now `if(arrOnes[i].length + arrOnes[i+1].length > longest)` for the first iteration this line gives `2 + 3` which is the number of 1s after splitting the string with 0. Store the summation in `longest` variable. When the loop is over we increase longest variable by 1 and return it. <br>

## Solution and Explanation in CPP

```
Input: 1775 (11011101111)
OutPut: 8
```
### Functions
```
void FlipBitToWin() {
    ll num;
    cin >> num;

    // If all 1s, so it's long length
    if(~num == 0) {
        cout << numToBinary(num) << endl;
        return;
    }

    ll currentLength = 0, preViousLength = 0, maxLength = 1;

    while (num != 0) {
        if ((num & 1) == 1) currentLength++; // current bit is 1
        else {
            preViousLength = (num & 2) == 0 ? 0 : currentLength;
            currentLength = 0;
        }
        maxLength = max(maxLength, preViousLength + currentLength + 1);
        num >>= 1;
    }
    
   cout << maxLength << endl;
}

```

- [1st Way](/src/Bit%20Manipulations/Flip%20Bit%20to%20Win/FlipBitToWin01.cpp)
- [2nd Way](/src/Bit%20Manipulations/Flip%20Bit%20to%20Win/FlipBitToWin02.cpp)


## Complexity

**Runtime Complexity**: O(n)
**Space Complexity**: O(n)
