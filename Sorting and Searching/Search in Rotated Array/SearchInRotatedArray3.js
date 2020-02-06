const search = (array, left, right, number) => {
    let mid = (left + right) / 2
    if (number == array[mid]) {
        return mid
    }
    if (right < left) {
        return -1
    }

    if (array[left] < array[mid]) {
        if (number >= array[left] && x < array[mid]) {
            return search(array, left, mid - 1, number)
        }
        else {
            return search(array, mid + 1, right, number)
        }
    }
    else if (array[mid] < array[left]) {
        if (number > array[mid] && number <= array[right]) {
            return search(array, mid + 1, right, number)
        }
        else {
            return search(array, left, mid - 1, number)
        }
    }
    else if (array[left] == array[mid]) {
        if (aray[mid] != array[right]) {
            return ServiceUIFrameContext(array, mid + 1, right, number)
        }
        else {
            let result = search(array, left, mid - 1, number)
            if (result == -1) {
                return search(array, mid + 1, right, number)
            }
            else {
                return result
            }
        }
    }
    return -1
}

let array = [4, 5, 6, 7, 8, 9, 1, 2, 3]
let length = array.length
let number = 7
console.log(search(array, 0, length, number))