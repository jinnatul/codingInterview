**Contents**
- [Question](#question)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)



## Question
*Write a method to sort an array of strings so that all the anagrams are next to each other*

## Solution and Explanation in JavaScript

<details>
<summary>View code</summary>
<p>
```
const words = ['map', 'pam', 'art', 'how', 'rat', 'tar', 'who', 'shoop'];

const alphabetize = word => word = word.split('').sort().join('')

const anagramGrouper = words =>{
    const anagrams = {};
    words.forEach((word)=>{
        const sortedWord = alphabetize(word);
        if (anagrams[sortedWord]) {
            return anagrams[sortedWord].push(word);
        }
        anagrams[sortedWord] = [word];
     });
    return anagrams;
}

const groupedAnagrams = anagramGrouper(words);

for(const sortedWord in groupedAnagrams){
    console.log(groupedAnagrams[sortedWord].toString());
}
```
</p>
</details>