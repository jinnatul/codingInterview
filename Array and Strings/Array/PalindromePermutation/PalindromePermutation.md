**Contents**

- [Question](#question)
- [Solution in JavaScript](#solution-and-explanation-in-javascript)
- [Solution in CPP](#solution-and-explanation-in-cpp)

## Question

*Given a string, write a function to check if it is a permutation of palindrome. A palindrome is a word or phrase that is the same forwards and backwards. A permutation is a rearranagement of letters. The palindrome does not need to be limited to just dictionary words.*

## Solution and Explanation in JavaScript

[View code](/Array%20and%20Strings/Array/PalindromePermutation/PalindromePermutation.js)

To solve this problem we make a function which has one parameter which takes a string. In this solution we will use `**for...of**` loop of javascript. <br>
**for...of** creates a loop iterating over iterable objects including: built-in `String`, `Array`, Array-like objects (e.g. `arguments` or `NodeList`), `TypedArray`, `Map`, `Set` and user defined iterables. It invokes a custom iteration hook with statemnets to be executed for the value of each distinct property of the object. <br>
First of all we make an object of `Set` class. Then we will make a `for...of` loop to iterate through the string. We will ignore the empty strings `if(char !== ' ')`. Then we will check if the `char` is already in `Set` object or not. If it is already in the object (`if(str.has(char))`) then we will delete (`str.delete(char)`) the character from the list but if it is not then we will add (`str.add(char)`) the character in the list. <br>
Lastly we will return `true` if the `str.size` less than or equal to 1. 

### Complexity
**Runtime Complexity**: O(n) <br>
**Space Complexity**: O(n)

## Solution and Explanation in CPP 

- [View code](/Array%20and%20Strings/Array/PalindromePermutation/PalindromePermutation01.cpp)
- [View code](/Array%20and%20Strings/Array/PalindromePermutation/PalindromePermutation02.cpp)


```
bool PalindromePermutation(string str)
{
    int ln = str.length();
    memset(cntChar, 0, sizeof(cntChar));

    for (int i = 0; i < ln; i++) {
        if(str[i] >= 'a' && str[i] <= 'z'){
            cntChar[str[i] - 'a']++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = tolower(str[i]);
            cntChar[str[i] - 'a']++;
        }
    }
    
    ll oddCnt = 0;
    for (ll i = 0; i < 27; ++i) {
        if(cntChar[i] & 1) oddCnt++;
    }

    if(oddCnt < 2) return true;
    return false;
}
```