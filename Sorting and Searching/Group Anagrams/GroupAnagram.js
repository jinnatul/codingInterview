// our array of words
const words = ['map', 'pam', 'art', 'how', 'rat', 'tar', 'who', 'shoop'];

const alphabetize = word => word = word.split('').sort().join('')

// main function
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

// store the result (anagrams object) in a variable called groupedAnagrams
const groupedAnagrams = anagramGrouper(words);

// iterate over groupedAnagrams, printing out each key:value pair on an individual line
for(const sortedWord in groupedAnagrams){
    console.log(groupedAnagrams[sortedWord].toString());
}
