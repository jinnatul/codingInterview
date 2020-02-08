const sortValleyPeak = array => {
    for (let i = 1; i < array.length; i += 2) {
        let biggestIndex = maxIndex(array, i - 1, i, i + 1)
        {
            if (i != biggestIndex) {
                swapNumbers(array, i, biggestIndex)
            }
        }
    }
}

const swapNumbers = (array, left, right) => {
    let temp = array[left]
    array[left] = array[right]
    array[right] = temp
}

const maxIndex = (array, a, b, c) => {
    let len = array.length
    let aValue = a >= 0 && a < len ? array[a] : Number.MIN_VALUE
    let bValue = b >= 0 && b < len ? array[b] : Number.MIN_VALUE
    let cValue = c >= 0 && c < len ? array[c] : Number.MIN_VALUE

    let max = Math.max(aValue, Math.max(bValue, cValue))
    if (aValue === max) {
        return a
    }
    else if (bValue === max) {
        return b
    }
    else {
        return c
    }
}

const array = [5, 3, 1, 2, 3]
sortValleyPeak(array)
array.forEach(element => {
    console.log(`${element} `)
});

// console.log(Number.MIN_VALUE)
// 5e-324
// console.log(Number.MAX_VALUE)
// 1.7976931348623157e+308