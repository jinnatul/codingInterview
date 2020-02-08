const swapNumbers = (array, left, right) => {
    let temp = array[left]
    array[left] = array[right]
    array[right] = temp
}

const sortValleyPeak = array =>
{
    array = array.sort()
    for (let i = 1; i < array.length; i += 2)
    {
        swapNumbers(array, i - 1, i)
        }
}
    

const array = [5, 3, 1, 2, 3]
sortValleyPeak(array)
array.forEach(element => {
    console.log(`${element} `)
});