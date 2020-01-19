const isPalindromePermutation = givenString =>
{
    let chars = new Set()
    for(let char of givenString)
    {
        if(char !== ' ')
        {
            if(chars.has(char))
            {
                chars.delete(char)
            }
            else{
                chars.add(char)
            }
        }
    }
    return chars.size <= 1
}

console.log(isPalindromePermutation('taco cat'))