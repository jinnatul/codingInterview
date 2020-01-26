**Contents**

- [Question](#question)
- [Solution in JavaScript](#solution-and-explanation-in-javascript)
- [Solution in CPP](#solution-and-explanation-in-cpp)

## Question

*Write a method to replace all spaces in a string with '%20'. You may assume that the string has suffiecinet space at the end to hold the additional characters, and that you are given the 'true' length of the string.*

#### Example
```
Input: "Mr 3ohn Smith"
Output: "Mr%203ohn%20Smith"
Input: "Mr 3ohn Smith   "
Output: "Mr%203ohn%20Smith"
```

## Solution and Explanation in JavaScript

[View code](/Array%20and%20Strings/Array/URLify/URLify.js)

For this problem we can use `replace()` function to replace all the spaces with `%20`. <br>
In the solution, we make a function called URLify which takes a parameter named `givenString`. Now we will regex `/\s/g` to find out the empty spaces and replace them with `%20`. 

```
const URLify = givenString => 
{
    return givenString.replace(/\s/g, '%20')
}
```

### Complexity

**Time Complexity** : Linear Runtime Complexity O(n) <br>
**Space Complexity** : O(n)

## Solution and Explanation in CPP

[View code](/Array%20and%20Strings/Array/URLify/URLify01.cpp)
