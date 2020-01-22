const countBits = number =>
{
    let string = number.toString(2)
    return string.split('').reduce((numBits, char) =>
    {
        //console.log(`numBits ${numBits} and char is ${char}`)
        return char === '1' ? numBits + 1 : numBits
    }, 0)
}

const conversion = (firstNumber, secondNumber) =>{

    return countBits(firstNumber ^ secondNumber)
} 

console.log(conversion(29, 15))