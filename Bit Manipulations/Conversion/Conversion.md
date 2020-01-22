## Question: Write a function to determince the number of bits you wuold need to flip to convert integer A to integer B. 
**Example**
```
Input: 29 (or : 11101), 15 (or : 01111)
Output: 2 
```

[Solution in JavaScript](/Bit%20Manipulations/Conversion/Conversion.js)

**Explanation**
For this solution we can make two functions, one is used for counting the bits and another to get double input numbers. <br>
In `conversion` function we get two number `firstNumber` and `secondNumber` from parameter and pass the calculation of firstNumber power of secondNumber. (`countBits(firstNumber ^ secondNumber)`) <br>

In counBits function we take the calculated number from conversion function. As it is in decimal format, we need to change it to the binary format. To convert the decimal to binary format we can do this -
`let string = number.toString(2)`. <br> It will convert the number into binary format and set to string variable. <br>
Now we will first split the string and use `reduce()` method which executes a **reducer** function (that you provide) on each element of the array, resulting in a single output value. <br>
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


