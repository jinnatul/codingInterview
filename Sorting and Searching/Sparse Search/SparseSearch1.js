const compareString = (string1, string2) =>
{
    let i = 0
    while (i < string1.length - 1 && string1[i] == string2[i])
    {
        i++
    }
    if (string1[i] > string2[i])
    {
        return -1
    }
    return string1[i] < string2[i]
}

const searchString = (array, string, first, last) =>
{
    if (first > last)
    {
        return -1
    }
    mid = (last + first) / 2
    if (!array[mid])
    {
        let left = mid - 1
        let right = mid + 1
        while (true)
        {
            if (left < right && right > last)
            {
                return -1
            }
            if (right <= last && array[right].length != 0)
            {
                mid = right
                break
            }
            if (left >= first && array[left].length != 0)
            {
                mid = left 
                break
            }
            right++
            left--
        }
    }
    if (compareString(string, array[mid]) === 0)
    {
        return mid 
    }
    if (compareString(string, array[mid]) < 0) {
        return searchString(array, string, mid + 1, last)
    }
    return searchString(array, string, first, mid - 1)
}

const array = ["for", "", "", "", "geeks", "ide", "",  
    "practice", "", "", "quiz", "", ""]  

let string = "quiz"
let n = array.length

console.log(searchString(array, string, 0, n - 1))