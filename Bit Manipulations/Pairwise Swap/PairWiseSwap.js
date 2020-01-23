const PairWiseSwap = number =>
{
    let binaryBits = number.toString(2)
    let oddBits = (number >> 1).toString(2)
    let evenBits = (number << 1).toString(2)
    let isOdd = true
    let answer = ''

    for(let i = 0; i < binaryBits.length; i++)
    {
        if(isOdd)
        {
            answer = oddBits[oddBits.length - 1 - i] === undefined ?
            '0' + answer : oddBits[oddBits.length - 1 - i] + answer
        }
        else
        {
            answer = oddBits[oddBits.length - 1 - i] === undefined ?
            '0' + answer : evenBits[evenBits.length - 1 - i] + answer
        }
        isOdd = !isOdd
    }
    return answer
}

console.log(PairWiseSwap(4)) // 000