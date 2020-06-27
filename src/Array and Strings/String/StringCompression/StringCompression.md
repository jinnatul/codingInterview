**Contents**

- [Question](#question)
  - [Example](#example)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)

## Question
*Implement a method to perform basic string comression using the counts to repeated character. For example, the string aabcccccaaa would become a2b1c5a3. If the "compressed" string would not become smaller than the original string, your method sould return the original string. You can assuem the string has only uppercase and lowercase letters.*

### Example
```
Input:  aaBbbbccddEEEe
Output: a2B1b3c2d2E3e1

Input:  aaBbbbccddEe
Output: aaBbbbccddEe
```

## Solution and Explanation in JavaScript

[View code](/src/Array%20and%20Strings/String/StringCompression/StringCompressed.js)

To solve this problem we make a function which takes one parameter `givenString`. Now, we take a variable `str` and initiate it with empty string, another variable `count` to count the occurrence of the character. <br><br>
Now we make a for loop to iterate through the string and check if the string's first letter and next letter is equal or not (`if(givenString[i] === givenString[i+1])`). If it is equal then we increment count by 1. If the both character is not equal then we will sum that character and number of occurrence `count` with `str`. 
<br>
Then we will return the less length string. <br>

## Solution and Explanation in CPP

- [View code](/src/Array%20and%20Strings/String/StringCompression/StringCompression01.cpp)
- [View code](/src/Array%20and%20Strings/String/StringCompression/StringCompression02.cpp)

```
string StringCompression(string str) {
    int ln = str.length(), cnt = 1, pos = 0;
    string temp = "";
    for (int i = 0; i < ln; ++i) {
        if(str[i] == str[i + 1]) cnt++;
        else {
            temp += str[i];
            string cntNum = to_string(cnt);
            temp += cntNum;
            cnt = 1;
        }
    }
    return (ln < temp.length()) ? str : temp;
}
```
## Complexity

**Time Complexity**: O(n) Linear runtime complexity <br>
**Space Complexity**: O(1)