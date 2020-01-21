## Question: Implement a method to perform basic string comression using the counts to repeated character. For example, the string aabcccccaaa would become a2b1c5a3. If the "compressed" string would not become smaller than the original string, your method sould return the original string. You can assuem the string has only uppercase and lowercase letters. 

[Solution in JavaScript](/Array%20and%20Strings/String/StringCompression/StringCompressed.js)

**Explanation**

To solve this problem we make a function which takes one parameter `givenString`. Now, we take a variable `str` and initiate it with empty string, another variable `count` to count the occurrence of the character. <br><br>
Now we make a for loop to iterate through the string and check if the string's first letter and next letter is equal or not (`if(givenString[i] === givenString[i+1])`). If it is equal then we increment count by 1. If the both character is not equal then we will sum that character and number of occurrence `count` with `str`. 
<br>
Then we will return the less length string. <br>

### Complexity

**Time Complexity**: O(n) Linear runtime complexity <br>
**Space Complexity**: O(1)
