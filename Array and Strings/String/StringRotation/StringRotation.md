**Contents**

- [Question](#question)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)

## Question
*Assume you have a method isSubstring which checks if one word is a substring of another. Given two strings, s1, s2 write code to check if s2 is a rotation of s1 using only one call to isSubstring (e.g. "waterbottle" is a rotation of "erbottlewat")*

## Solution and Explanation in JavaScript

[View code](/Array%20and%20Strings/String/StringRotation/StringRotation.js)

A string is said to be a rotation of another string if it has the same length, contains the same characters, and they were rotated around one of the character. For example, string `bcda` is a rotation of `abcd` but `bdca` is not a rotation of string `abcd`. <br> <br>

One of the simplest solutions to this problem is to check if the both string has same length, if not then string can't be rotation of another, so return false. If the length is same then concatenate the first string with itself and check if the second string is the sub-string of the concatenated string or not. If yes then second string is a rotation of first string. 

## Solution and Explanation in CPP

- [View code](/Array%20and%20Strings/String/StringRotation/StringRotation01.cpp)
- [View code](/Array%20and%20Strings/String/StringRotation/StringRotation02.cpp)
- [View code](/Array%20and%20Strings/String/StringRotation/StringRotation03.cpp)
- [View code](/Array%20and%20Strings/String/StringRotation/StringRotation04.cpp)

```
bool StringRotation(string first, string second) {
    first += first;
    if(first.find(second) != string::npos) return true;
    return false;
}
```
```
bool StringRotation(string first, string second) {

    first += first;
    int ln = second.size();

    for (int i = 0; i <= first.size() - ln; ++i) {
        string subStr = first.substr(i, ln);
        if (subStr == second) return true;
    }

    return false;
}
```