const setZeroes = matrix =>
{
    let colZero = false, rowZero = false
    let row = matrix.length, col = matrix[0].length

    for(let i = 0; i < col; i++)
    {
        if(matrix[0][i] === 0)
        {
            colZero = true
            break
        }
    }
    for(let j = 0; j < row; j++)
    {
        if(matrix[j][0] === 0)
        {
            rowZero = true
            break
        }
    }

    for(let i = 0; i < row; i++)
    {
        for(let j = 0; j < col; j++)
        {
            if(matrix[i][j] === 0)
            {
                matrix[0][j] = 0
                matrix[i][0] = 0
            }
        }
    }
    
    for(let i = 1; i < row; i++)
    {
        for(let j = 1; j < col; j++)
        {
            if(matrix[0][j] ===  0 || matrix[i][0] === 0)
            {
                matrix[i][j] = 0
            }
        }
    }

    for(let i = 0; i < row; i++)
    {
        for(let j = 0; j < col; j++)
        {
            if(colZero)
            {
                matrix[0][j] = 0
            }
            if(rowZero)
            {
                matrix[j][0] = 0
            }
        }
    }

    return matrix
}

console.log(setZeroes([
    [1,1,1],
    [1,0,1],
    [1,1,1]
  ]))          // [ [ 1, 0, 1 ], [ 0, 0, 0 ], [ 1, 0, 1 ] ]
