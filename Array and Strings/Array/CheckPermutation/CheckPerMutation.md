 **Contents**

- [Question](#question)
- [Solution in JavaScript](#solution-and-explanation-in-javascript)
- [Solution in CPP](#solution-and-explanation-in-cpp)


## Question

*Given two strings, write a method to decide if one is a permutation of the others*

## Solution and Explanation in JavaScript

[View code](/Array%20and%20Strings/Array/CheckPermutation/checkPermutation.js)

In the above solution we use JavaScript default function to get our expected output and another solution we use c++ sort function. In the solution we make a function named `checkPermutation` which takes two parameters `firstString` and `secondString`. First of all we check if the both string have same length of characters or not. If both string have same string length then we will proceed to our next step, if not then we will return false. <br>
If both string have same length then we will split the string using split function with empty string `split('')`. Lets say, our first string is `javascript`. After splitting the string we get our string like this -

```
[
  'j', 'a', 'v', 'a',
  's', 'c', 'r', 'i',
  'p', 't'
]

```
Then we will sort the string using `sort()` function. After sorting our string will look like this -

```
[
  'a', 'a', 'c', 'i',
  'j', 'p', 'r', 's',
  't', 'v'
]
```
Then we will join our sorted string using `join('')` function and outcome will look like this `aacijprstv`. <br>

We will do this for both of the string and check if the both string is equal or not. If equal then return true, if not then return false.


### Complexity

**Runtime Complexity**: O(n log n)


## Solution and Explanation in CPP

[View code](/Array%20and%20Strings/Array/CheckPermutation/CheckPermutation01.cpp)

```
bool checkPermutation(string str1, string str2)
{
    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2) return true;

    return false;
}
```

[View code](/Array%20and%20Strings/Array/CheckPermutation/CheckPermutation02.cpp)