const binarToString = number =>
{
    let n = 1, str = '0.'
    if(number <= 0 || number >= 1)
    {
        return 'ERROR'
    }
    while(n <= 32)
    {
        if(number >= Math.pow(2, -n))
        {
            number -= Math.pow(2, -n)
            str += '1'
        }
        else
        {
            str += '0'
        }
        n++
    }

    if(n === 33 && number > 0)
    {
        return 'ERROR'
    }
    else
    {
        return str
    }
}

console.log(binarToString(0.625)) // 0.10100000000000000000000000000000
console.log(binarToString(0.72)) // ERROR