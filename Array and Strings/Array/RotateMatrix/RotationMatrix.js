const rotateMatrix = matrix =>
{
    let n = matrix.length

    for(let i = 0; i < n/2; i++)
    {
        for(let j = i; j < n - i - 1; j++)
        {
            let temp = matrix[i][j]
            matrix[i][j] = matrix[n -1-j][i]
            matrix[n -1-j][i] = matrix[n-1-i][n-1-j]
            matrix[n-1-i][n-1-j] = matrix[j][n-1-i]
            matrix[j][n-1-i] = temp
        }
    }

    return matrix
}

console.log(rotateMatrix([
    [1,2,3],
    [4,5,6],
    [7,8,9]
  ]))            // [ [ 7, 4, 1 ], [ 8, 5, 2 ], [ 9, 6, 3 ] ]
