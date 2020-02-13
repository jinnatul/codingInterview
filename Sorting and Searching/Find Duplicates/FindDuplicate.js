class BitArray {
    constructor(n) {
        let array = {}
        array = [(n >> 5) + 1]
    }

    get = pos => {
        let index = (pos >> 5)
        bitNo = (pos & 0x1F)
        return (array[index] & (1 << bitNo)) != 0
    }

    set = pos => {
        let index = (pos >> 5)
        let bitNo = (pos & 0x1F)
        array[index] |= (1 << bitNo)
    }

    checkDuplicates = (array) => {
        ba = BitArray(320000)
        for (let i = 0; i < array.length; i++) {
            let num = array[i]
            if (ba.get(num)) {
                console.log(`${num} `)
            }
            else {
                ba.set(num)
            }
        }
    }
}

array = [1, 5, 1, 10, 12, 10]
checkDuplicates(array)