// const search = (array, number) => {
//     let found = 0
//     for (let index of array) {
//         if (array[index] === number) {
//             console.log(array[index])
//             found = 1
//             console.log(`${number} is found in index ${index}`)
//         }
//     }
//     if (found == 0) {
//         console.log(`Data not found`)
//     }
// }

// let array = [15, 16, 19, 20, 25, 1, 3, 4, 5, 7, 10, 14]
// let find = 10
// search(array, find)

const iterativeFunction = (array, number) => {
    let start = 0, end = array.length - 1
    while (start <= end) {
        let mid = Math.floor((start + end) / 2)
        if (array[mid] === number) {
            return console.log(`${number} is found at index ${mid}`)
        }
        else if (array[mid] < number) {
            start = mid + 1
        }
        else {
            end = mid - 1
        }
    }
    return console.log(`${number} is not found !`)
}

let arr = [1, 3, 5, 7, 8, 9]; 
let x = 5;
iterativeFunction(arr, x)