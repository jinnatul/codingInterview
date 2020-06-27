const isUnique = givenString => {
    let obj = {}
    for(let i = 0; i < givenString.length; i++)
    {
        let ch = givenString[i]
        if(obj[ch])
        {
            return false
        }
        else 
        {
            obj[ch] = true
        }
    }
    return true
}

console.log(isUnique('abcde')) // true
console.log(isUnique('aaaa')) // false