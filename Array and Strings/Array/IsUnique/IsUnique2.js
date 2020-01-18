const isUnique = inputString =>
{
    return new Set(inputString).size == inputString.length
}

console.log(isUnique('abc')) // true
console.log(isUnique('aaa')) // false