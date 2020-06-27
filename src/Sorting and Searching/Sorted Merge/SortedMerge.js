const SortedMerge = (array1, array2, firstArrayElements, secondArrayElements) =>
{
    let i = firstArrayElements - 1, j = secondArrayElements - 1
    let lastIndex = firstArrayElements + secondArrayElements - 1

    while (j >= 0)
    {
        if (i >= 0 && array1[i] > array2[j])
        {
            array1[lastIndex] = array1[i]
            i--
        }
        else
        {
            array1[lastIndex] = array2[j]
            j--
        }
        lastIndex--
    }
}

const PrintArray = (array3, limit) =>
{
    for (let i = 0; i < limit; i++)
    {
        console.log(`${array3[i]} `)
        }
    }


let array1 = [10, 12, 13, 14, 16, NaN, NaN, NaN, NaN, NaN]
let array2 = [5, 6, 7, 8, 9]
let n = 5, m = 5, finalArraySize = 10
SortedMerge(array1, array2, n, m)
PrintArray(array1, finalArraySize)
/**
 * 
5 
6 
7 
8 
9 
10 
12 
13 
14 
16 
 */