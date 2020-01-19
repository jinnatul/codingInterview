## Question: There are three types of edits that can be performed on strings; insert a character, remove a character or replace a character. Given two strings, write a function to check if they are one edit (or zero edit) away. 

### EXAMPLE 

```
pale, ple -> true
pales, pale -> true
pale, bale -> true
pale, bake -> false
```

[Solution in JavaScript](https://https://github.com/zubayerhimel/coding-Interview/blob/array_and_string/Array%20and%20Strings/Array/OneAway/oneAway.js)


To solve the problem we make a function called `oneAway` which takes two parameter `firstString` and `secondString`. 
First of all we will check if both of the given string length. If lengths differ by more than 1 then can't be true, because we can only return true if the string can be one time edited. 
Then we take a boolean type variable called `isEdited` and set it to false. Now lets make a for loop to iterate both of the string length. Loop starts from `0` and continue the length of both of the string. Now check if the character of both string is equal or not (`if (str1[i] !== str2[j])`). If the character is same then we don't do anything and iterate for the next character.
If the character is not same then we will check if the boolean variable `isEdited` is true or false. If it is true then it means the string is already edited once. If it is then we will return false. 
Then we will check if the length of the `firstString` and `secondString`. If `firstString` length is greater than `secondString` length then we will decrease `j` means deleting character from `firstString` On the other hand, if the length of the `firstString` is less than `secondString` then we will decrease `i` means deleting character from `secondString`. 
Then we will set the isEdited variable to true as the string is edited.
After the for loop return true.

#### Runtime and Space Complexity

Runtime complexity of the algorithm is O(n) Linear Complexity. 
Additional space complexity is O(1)