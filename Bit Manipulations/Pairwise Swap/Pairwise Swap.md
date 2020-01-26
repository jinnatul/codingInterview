**Contents**

- [Question](#question)
- [Solution in JavaScript](#solution-and-explanation-in-javascript)
- [Solution in CPP](#solution-and-explanation-in-cpp)

## Question

*Write a program to swap odd and even bits in an integer with as few instructions as possible*

## Solution and Explanation in JavaScript

[View code](/Bit%20Manipulations/Pairwise%20Swap/PairWiseSwap.js)

To solve this problem we make a function `PairWiseSwap` which takes one parameter of given number. Lets convert the number into binary format and store in `binarBits` variable, right shift one bit and store in `oddBits` and left shift one bit and store `evenBits`. Another two variable `isOdd` and set it to true and `answer` to empty string. <br>

Now we make a for loop which starts from 0 and goes upto binary length of the number. Now we check if the bit is odd or not. If odd then we will check if right most bit of `oddBits` is undefined or not. If undefined then store answer followed by 0 `'0' + answer`, else store answer followed by the right most bit. <br>

If the bit is not odd then check if the right most bit of `oddBits` is undefined or not. If undefined then store answer follwoed by 0 else store answer followed by right most bit of `evenBits`. Then change the `isOdd` status to false. Lastly return the answer. 

### Complexity 

**Runtime Complexity**: O(n)

## Solution and Explanatio in CPP