**Contents**

- [Question](#question)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)


## Question
 Triple Step: A child is running up a staircase with n steps and can hop either 1 step, 2 steps or 3 steps at a time. Implement
 a method to count how many possible ways the child can run up the stairs.
 
 ```
 Input:  10
 Output: 274
 ----
 Input:  5
 Output: 13
 ```
 
## Solution and Explanation in JavaScript


## Solution and Explanation in CPP

- Recursion Solution (Brute Force)
```
int Triple_Step(int num)
{
    if(num < 0) return 0;
    else if(num == 0) return 1;
    else return Triple_Step(num - 1) + Triple_Step(num - 2) + Triple_Step(num - 3);
}
```

- Memorization Solution
```
int dp[1000];
int Triple_Step(int num)
{
    if(num < 0) return 0;
    else if(num == 0) return 1;
    else if(dp[num]) return dp[num];
    else return dp[num] = Triple_Step(num - 1) + Triple_Step(num - 2) + Triple_Step(num - 3);
}
```
  ### Code Here
  * [Brute Force](/src/Recursion%20and%20DP/Triple%20Step/TripleStep01.cpp)
  * [Memorization](/src/Recursion%20and%20DP/Triple%20Step/TripleStep02.cpp)

## Complexity
- Brute Force c++ O(3^n)
- Memorization Solution c++ O(n*log(n))
