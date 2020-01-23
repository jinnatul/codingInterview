const CountBits = number =>
{
    let string = number.toString(2)
    return string.split('').reduce((numBits, char) =>
    {
        //console.log(`numBits ${numBits} and char is ${char}`)
        return char === '1' ? numBits + 1 : numBits
    }, 0)
}

const Conversion = (firstNumber, secondNumber) =>{

    return CountBits(firstNumber ^ secondNumber)
} 

console.log(Conversion(29, 15)) // 2