const stringRotation = (firstString, secondString) =>
{
    if(firstString.length !== secondString.length)
    {
        return false
    }

    return (firstString += firstString).includes(secondString)
}

console.log(stringRotation('abcd', 'bdca')) // false
console.log(stringRotation('waterbottle', 'erbottlewat')) // true
