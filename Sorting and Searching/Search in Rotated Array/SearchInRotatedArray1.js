const Search = (array, target) =>
{
    let low = 0, high = array.length - 1
    while (low < high)
    {
        let mid = low + (high - low) / 2
        if (array[mid] > array[high])
        {
            low = mid+1
        }
        else
        {
            high = mid
        }
    }
    let rot = low
    low = 0
    high = array.length - 1
    while (low <= high)
    {
        let mid = low + (high - low) / 2
        let realMid = (mid + row) % nums.length
        if (array[realMid] == target)
        {
            return realMid
        }
        else if (array[realMid] > target)
        {
            high = mid - 1
        }
        else
        {
            low = mid+1
        }
    }
    return -1
}

let array = [4, 5, 6, 7, 8, 9, 1, 2, 3]
let find = 5

console.log(Search(array, find))