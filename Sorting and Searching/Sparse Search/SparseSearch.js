const binarySearch = (array, low, high, string) =>
{
    if (low > high)
    {
        return -1
    }
    let mid = (low + high) / 2
    if (array[mid] == "")
    {
        let left = mid - 1
        let right = mid + 1

        while (true)
        {
            if (left < low && right > high)
            {
                return -1
            }
            if (left >= low && array[left] != "")
            {
                mid = left
                break
            }
            else if (right <= high && array[right] != "")
            {
                mid = right
                break
            }
            left--
            right++
        }
    }
    if (array[mid] == string)
    {
        return mid
    }
    else if (array[mid] > string)
    {
        return binarySearch(array, low, mid - 1, string)
    }
    else
    {
        return binarySearch(array, mid + 1, high, string)    
    }
}

const sparseSearch = (array, string, n) =>
{
    return binarySearch(array, 0, n - 1, string)
}

const array = ["for", "geeks", "", "", "", "", "ide", "practice", "", "", "", "quiz"]
const x = "geeks"
const n = x.length
let index = sparseSearch(array, x, n)
if (index != -1)
{
    console.log(`${x} is found at index ${index}`)
}
else
{
    console.log(`${x} is not found`)
}
    

