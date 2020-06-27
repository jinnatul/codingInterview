const checkPermutation = (firstString, secondString) =>
{
    if(firstString.length != secondString.length)
    {
        return false
    }

    return firstString.split('').sort().join('') === secondString.split('').sort().join('')
}

console.log(checkPermutation('abc', 'bac')) // true
console.log(checkPermutation('abc', 'dar')) // false
