const Search = (array, l, h, key) =>
{
    //console.log(`this is l ${l} and this is h ${h}`)
    if (l > h) return -1

    let mid = (l + h) / 2

    if (array[mid] == key) return mid
    
    if (array[l] <= array[mid])
    {
        if (key >= array[l] && key <= array[mid])
        {
            return Search(array, l, mid - 1, key)
        }
        return Search(array, mid+1, h, key)
    }
    if (key >= array[mid] && key <= array[h])
    {
        return Search(array, mid + 1, h, key)
    }    
    return Search(array, l, mid-1, key)
}

let array = [9, 8, 1, 2, 3, 4, 5, 6, 7]
let length = array.length
console.log(length)
let key = 3
let i = Search(array, 0, length, key)
if (i == -1)
{
    console.log(`Key not found`)
}
else
{
    console.log(`Found`)
}