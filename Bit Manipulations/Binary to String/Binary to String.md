**Contents**

- [Question](#question)
- [Solution in JavaScript](#solution-and-explanation-in-javascript)
- [Solution in CPP](#solution-and-explanation-in-cpp)

## Question
*Given a real number between 0 and 1 (e.g. 0.72) that is passed in as a double, print the binary representation. If the number cannot be represented accurately in binary with at most 32 characters, print 'ERROR'.*

## Solution and Explanation in JavaScript

[View code](/Bit%20Manipulations/Binary%20to%20String/BinaryToString.js)

First, let's start off by asking ourselves what a non integer number in binary look like. By analogy to decimal number, the binary 0.101 would look like:

`0.101 = 1 * 1/2^1 + 0 * 1/2^2 + 1 * 1/2^3`

To print the decimal part we can compare the number with .5, then .25 and so on. <br>

For this solution we make a function which takes one parameter as double number. Then we check if the number is in range between 0 and 1. <br>

Then we take one variable `n` which counts the bit initiated with 1 and another one `str` which is initiated with a string `0.`. <br>
Now we check if the given number is greater than or equal to 2 to the power of inverse `n` (`(number >= Math.pow(2, -n))`). If it is, then we will minus 2 to the power of inverse n from the number (` number -= Math.pow(2, -n)`). Then we will add 1 with the string. But if the number is not greater or equal then we will add 0. After that we will increase n by 1. <br>

Lastly we check if n exceeds 32 bits. If exceeds 32 bits then return `ERROR` else return the string `str`.

### Complexity
**Time Complexity**: O(n) <br>
**Space Compelxity**: O(1)

## Solution and Explanation in CPP

























