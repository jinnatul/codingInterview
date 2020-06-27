**Contents**

- [Question](#question)
    - [Example](#example)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
  - [Functions](#functions)
- [Complexity](#complexity)

## Question
*Write a function to determine the number of bits you would need to flip to convert integer A to integer B.*
#### Example
```
Input: 29 (or : 11101), 15 (or : 01111)
Output: 2 
```

## Solution and Explanation in JavaScript

- [View code](/src/Bit%20Manipulations/Conversion/Conversion.js)

For this solution we can make two functions, one is used for counting the bits and another to get double input numbers. <br>
In `conversion` function we get two number `firstNumber` and `secondNumber` from parameter and pass the calculation of firstNumber power of secondNumber. (`countBits(firstNumber ^ secondNumber)`) <br>

In `CountBits` function we take the calculated number from `Conversion` function. As it is in decimal format, we need to change it to the binary format. To convert the decimal to binary format we can do this -
`let string = number.toString(2)`. <br> It will convert the number into binary format and set to `string` variable. <br>

Now we will first split the string and use `reduce()` method which executes a **reducer** function (that we provide) on each element of the array, resulting in a single output value. <br>

In reduce method there are two variable named `numBits` and `char`. Initially `numBits` variable is `0` and `char` is the first bit of the binary format of the `number` variable. <br>

Now we check if the `char` is equal to `1` then we will increase `numBits` by `1` and return it else we will return the unchanged `numBits`. <br>

If we print the inner term of reduce method we can see how `numBits` and `char` is changed - 
```
numBits 0 and char is 1
numBits 1 and char is 0
numBits 1 and char is 0
numBits 1 and char is 1
numBits 2 and char is 0
```

## Solution and Explanation in CPP

```
Input:  29  15
Output: 2
Xor = 29 ^ 15 = 18
Number OddCnt
18     0
9      1
4      1
2      1
1      2
```
### Functions
```
void Conversion() {
    ll num1, num2;
    cin >> num1 >> num2;

    ll oddCnt = 0;
    for (ll i = num1 ^ num2; i != 0; i >>= 1) {
        oddCnt += (i & 1);
        cout << i << "    " << oddCnt << endl;
    }

    cout << oddCnt << endl;
}
```
```
void Conversion() {
    ll num1, num2;
    cin >> num1 >> num2;

    ll oddCnt = 0;
    for (ll i = num1 ^ num2; i != 0; i = i & (i - 1)) {
        oddCnt ++;
    }

    cout << oddCnt << endl;
}
```

- [CodeHere-> 1st Way](/src/Bit%20Manipulations/Conversion/Conversion01.cpp)
- [CodeHere-> 2nd Way](/src/Bit%20Manipulations/Conversion/Conversion02.cpp)


## Complexity

**Runtime Complexity**: O(n)
