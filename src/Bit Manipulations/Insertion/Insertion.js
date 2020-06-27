const Insertion = (n, m, i, j) =>
{
    let allOnes = ~0
    let left = allOnes << (j + 1)

    let right = ((i << i) - 1)
    let mask = left | right
    let n_cleared = n & mask
    let m_shift = m << i 
    return (n_cleared | m_shift)
}

console.log(Insertion(1024, 19, 2, 6))