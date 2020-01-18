const isUnique = givenString =>
{
    return new Set(givenString).size == givenString.length
}

console.log(isUnique('abc')) // true
console.log(isUnique('aaa')) // false