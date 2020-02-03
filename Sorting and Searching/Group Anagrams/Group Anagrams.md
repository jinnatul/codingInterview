**Contents**
- [Question](#question)
  - [Example](#example)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)



## Question
*Write a method to sort an array of strings so that all the anagrams are next to each other*

### Example 
```
input: ['map', 'pam', 'art', 'how', 'rat', 'tar', 'who', 'shoop']
output: map,pam
art,rat,tar
how,who
shoop

```

## Solution and Explanation in JavaScript

[View code](/Sorting%20and%20Searching/Group%20Anagrams/GroupAnagram.js)

Since an anagram is just matching letters, and letter order doesn't matter, we can take each word and alphabetize it. Then we can compare one alphabetized word with another. If they match, we have an anagram. <br>
To get the word in alphabetic order we make a function named as `alphabetize()` which takes a string and sort it in alphabetic order. <br>

Now our main function is `anagramGrouper()` which takes one parameter; array of string. We make an empty object named as `anagrams`. Now we run a foreach loop through the array that we passed through the parameter. We will store every sorted string in `sortedWord` variable. Then we will check if the `anagrams` object has the current word. If the object already have the current word then we will rewrite the index with current word. 
```
anagram[sortedWord] = [word]
```
If the word is not already in the object then we will push the word in the end of the array object. <br>
After that we will return the whole object. 

## Solution and Explanation in CPP

solution

## Complexity 

**Runtime Complexity**: O(n)