const Insertion = (N, M, i, j) =>
{
    let n = N.split('')
    let m = M.split('')
    let nLength = n.length - 1
    let mLength = m.length - 1

    for(let a = 0; a < j - i + 1; a++)
    {
        n[nLength - (i + a)] = m[mLength - a]
    }
    return n.join('')
}

console.log(Insertion('10000000000', '10011', 2, 6))