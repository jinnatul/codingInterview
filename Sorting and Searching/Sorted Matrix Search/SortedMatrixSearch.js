const search = (matrix, n, number) => {
    if (n == 0) {
        return -1
    }
    if (number < matrix[0][0] || number > matrix[n - 1][n - 1]) {
        return -1
    }
    let i = 0, j = n - 1
    while (i < n && j >= 0) {
        if (matrix[i][j] == number) {
            return console.log(`${number} is found at ${i} ${j}`)
        }
        if (matrix[i][j] > number) {
            console.log(`${matrix[i][j]} greater than number`)
            j--
        }
        else {
            console.log(`${matrix[i][j]} less than number`)
            i++
        }
    }
    return console.log(`${number} is not found`)
}

const matrix = [
    [1, 2, 3, 4],
    [5, 6, 7, 8],
    [12, 23, 32, 43],
    [14, 25, 34, 46],
];
search(matrix, 4, 7)