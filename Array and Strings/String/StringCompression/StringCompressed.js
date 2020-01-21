const stringCompressed = givenString =>
{
    let str = ''
    let count = 1

    for(let i = 0; i < givenString.length; i++)
    {
        if(givenString[i] === givenString[i+1])
        {
            count++
        }
        else
        {
            str += givenString[i] + count
            count = 1
        }
    }

    return str.length < givenString.length ? str : givenString
}

console.log(stringCompressed('aaaabbbccdee')) // a4b3c2d1e2
