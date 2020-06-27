const isPalindromePermutation = givenString =>
{
    let str = new Set()
    for(let char of givenString)
    {
        if(char !== ' ')
        {
            if(str.has(char))
            {
                str.delete(char)
            }
            else
            {
                str.add(char)
            }
        }
    }
    return str.size <= 1
}

console.log(isPalindromePermutation('taco cat'))
