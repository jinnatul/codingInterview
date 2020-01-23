const FlipBitToWin = number =>
{
    let binaryString = number.toString(2)
    //console.log(`binary form of number ${binaryString}`)
    let arrOnes = binaryString.split('0')
    console.log(`split form of number ${arrOnes.length - 1}`)
    let longest = 0
    //console.log(`arrones.length is ${arrOnes.length} and arrones.length - 1 is ${arrOnes.length -1}`)
    for(let i = 0; i < arrOnes.length - 1; i++)
    {
        if(arrOnes[i].length + arrOnes[i+1].length > longest)
        {
            longest = arrOnes[i].length + arrOnes[i+1].length
            //console.log(`arrayone[i].lenght ${arrOnes[i].length} and ${arrOnes[i+1].length}`)
            //console.log(longest)
        }
    }
    longest++
    return longest
}

console.log(FlipBitToWin(1775)) //8