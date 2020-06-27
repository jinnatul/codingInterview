**Contents**

- [Question](#question)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)


## Question
   Recursive Multiply: Write a recursive function to multiply two positive integers without using the (*) operator or (/). 
   You can use addition, subtracting and bit shifting, but you should minimize the number of those operations.
 
 ```
 Input:  4 5
 Output: 20
 
 Input:  1 5
 Output: 5
 ```
 
## Solution and Explanation in JavaScript

-
-

### Code Here
  * []()
  * []()

    
## Solution and Explanation in CPP

- Solution 1
```
int Recursive_Multiply(int num1, int num2)
{
    if(num1 == 0) return 0;
    else if (num1 == 1) return num2;

    // num1 / 2
    int mid = num1 >> 1;
    int side1 = Recursive_Multiply(mid, num2);
    int side2 = side1;
    if (num1 & 1) side2 = Recursive_Multiply(num1 - mid, num2);

    return side1 + side2;
}
```

- Solution 2
```
int dp[10000];
int Recursive_Multiply(int num1, int num2)
{
    if(num1 == 0) return 0;
    else if (num1 == 1) return num2;
    else if(dp[num1] > 0)
        return dp[num1];

    // num1 / 2
    int mid = num1 >> 1;
    int side1 = Recursive_Multiply(mid, num2);
    int side2 = side1;
    if (num1 & 1) side2 = Recursive_Multiply(num1 - mid, num2);

    return dp[num1] = side1 + side2;
}
```

- Solution 3
```
int Recursive_Multiply(int num1, int num2)
{
    if(num1 == 0) return 0;
    else if (num1 == 1) return num2;

    // num1 / 2
    int mid = num1 >> 1;
    int side1 = Recursive_Multiply(mid, num2);

    if (num1 % 2 == 0) return side1 + side1;
    else return side1 + side1 + num2;
}
```

### Code Here 
  * [Solution 1](/src/Recursion%20and%20DP/Recursive%20Multiply/RecursiveMultiply01.cpp)
  * [Solution 2](/src/Recursion%20and%20DP/Recursive%20Multiply/RecursiveMultiply02.cpp)
  * [Solution 3](/src/Recursion%20and%20DP/Recursive%20Multiply/RecursiveMultiply03.cpp)

## Complexity
- Solution 3 O(log num1) num1 = small number
