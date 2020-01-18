const isUnique = inputString => {
    let obj = {}
    for(let i = 0; i < inputString.length; i++)
    {
        let ch = inputString[i]
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

console.log(isUnique('abcde'))
console.log(isUnique('aaaa'))