**Contents**

- [Question](#question)
- [Solution in JavaScript](#solution-and-explanation-in-javascript)
- [Solution in CPP](#solution-and-explanation-in-cpp)

## Question
*There are three types of edits that can be performed on strings; insert a character, remove a character or replace a character. Given two strings, write a function to check if they are one edit (or zero edit) away.*

### EXAMPLE 

```
pale, ple -> true
pales, pale -> true
pale, bale -> true
pale, bake -> false
```

## Solution and Explanation in JavaScript

[View code](/Array%20and%20Strings/Array/OneAway/oneAway.js)

To solve the problem we make a function called `oneAway` which takes two parameter `firstString` and `secondString`. <br>
First of all we will check if both of the given string length. If lengths differ by more than 1 then can't be true, because we can only return true if the string can be one time edited. <br>
Then we take a boolean type variable called `isEdited` and set it to false. Now lets make a for loop to iterate both of the string length. Loop starts from `0` and continue the length of both of the string. Now check if the character of both string is equal or not (`if (str1[i] !== str2[j])`). If the character is same then we don't do anything and iterate for the next character. <br>
If the character is not same then we will check if the boolean variable `isEdited` is true or false. If it is true then it means the string is already edited once. If it is then we will return false. <br>
Then we will check if the length of the `firstString` and `secondString`. If `firstString` length is greater than `secondString` length then we will decrease `j` means deleting character from `firstString` On the other hand, if the length of the `firstString` is less than `secondString` then we will decrease `i` means deleting character from `secondString`. <br>
Then we will set the isEdited variable to true as the string is edited.
After the for loop return true.


### Complexity

**Runtime Complexity**: O(n) <br>
**Additional Space Complexity**: O(1)


## Solution and Explanation in CPP

- [View code](/Array%20and%20Strings/Array/OneAway/OneAway01.cpp)
- [View code](/Array%20and%20Strings/Array/OneAway/OneAway02.cpp)


```
bool OneAway(string str1, string str2)
{
    int ln1 = str1.length();
    int ln2 = str2.length();

    if(abs(ln1 - ln2) > 1) return false;

    string big = ln1 < ln2 ? str1 : str2;
    string small = ln1 < ln2 ? str2 : str1;

    ll pos1 = 0, pos2 = 0;
    bool findDifference = false;

    while (pos2 < small.length() && pos1 < big.length()) {
        if(small[pos2] != big[pos1]) {
            if (findDifference) return false;
            findDifference = true;
            if(small.length() == big.length()) pos1++;
        }
        else pos1++;
        pos2++;
    }

    return true;
}

```