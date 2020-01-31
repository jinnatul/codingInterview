**Contents**

- [Question](#question)
- [Solution in JavaScript](#solution-and-explanation-in-javascript)
- [Solution in CPP](#solution-and-explanation-in-cpp)

## Question
*Given a real number between 0 and 1 (e.g. 0.72) that is passed in as a double, print the binary representation. If the number cannot be represented accurately in binary with at most 32 characters, print 'ERROR'.*

## Solution and Explanation in JavaScript

- [View code](/Bit%20Manipulations/Binary%20to%20String/BinaryToString.js)

First, let's start off by asking ourselves what a non integer number in binary look like. By analogy to decimal number, the binary 0.101 would look like:

`0.101 = 1 * 1/2^1 + 0 * 1/2^2 + 1 * 1/2^3`

To print the decimal part we can compare the number with .5, then .25 and so on. <br>

For this solution we make a function which takes one parameter as double number. Then we check if the number is in range between 0 and 1. <br>

Then we take one variable `n` which counts the bit initiated with 1 and another one `str` which is initiated with a string `0.`. <br>
Now we check if the given number is greater than or equal to 2 to the power of inverse `n` (`(number >= Math.pow(2, -n))`). If it is, then we will minus 2 to the power of inverse n from the number (` number -= Math.pow(2, -n)`). Then we will add 1 with the string. But if the number is not greater or equal then we will add 0. After that we will increase n by 1. <br>

Lastly we check if n exceeds 32 bits. If exceeds 32 bits then return `ERROR` else return the string `str`.

## Solution and Explanation in CPP

```
Input: 0.63
Output: .01
num -> answer
0.5    .0
0     .01

Input:  0.24
Output: Error (more then 32bits so print Error)
num -> answer
0.48 .0
0.96 .00
0.92 .001
0.84 .0011
0.68 .00111
0.36 .001111
0.72 .0011110
0.44 .00111101
0.88 .001111010
0.76 .0011110101
0.52 .00111101011
0.04 .001111010111
0.08 .0011110101110
0.16 .00111101011100
0.32 .001111010111000
0.64 .0011110101110000
0.28 .00111101011100001
0.56 .001111010111000010
0.12 .0011110101110000101
0.24 .00111101011100001010
0.48 .001111010111000010100
0.96 .0011110101110000101000
0.92 .00111101011100001010001
0.84 .001111010111000010100011
0.68 .0011110101110000101000111
0.36 .00111101011100001010001111
0.72 .001111010111000010100011110
0.44 .0011110101110000101000111101
0.88 .00111101011100001010001111010
0.76 .001111010111000010100011110101
0.52 .0011110101110000101000111101011

```
### Functions
```
void BinaryToString() {
    double num;
    cin >> num;

    if(num > 1 || num < 0) {
        cout << "Error" << endl;
        return;
    }

    string ans = ".";
    while (num > 0) {
        if(ans.length() >= 32) {
            cout << "Error" << endl;
            return;
        }

        double current = num * 2;
        if(current >= 1) {
            ans += "1";
            num = current - 1;
        }
        else {
            ans += "0";
            num = current;
        }
    }

    cout << ans << endl;
}
```

- [1st Way](/Bit%20Manipulations/Binary%20to%20String/BinaryToString01.cpp)


### Complexity
**Time Complexity**: O(n) <br>
**Space Compelxity**: O(1)
