class BitSet {
    constructor(size) {
        bitset = [(size >> 5) + 1]
    }
    get = pos => {
        let wordNumber = (pos >> 5)
        let bitNumber = (pos & 0x1F)
        return (bitset[wordNumber] & (1 << bitNumber)) != 0
    }
    set = pos => {
        let wordNumber = (pos >> 5)
        let bitNumber = (pos & 0x1F)
        bitset[wordNumber] |= (1 << bitNumber)
    }
}

const checkDuplicate = array => {
    bs = new BitSet(320000)
    for (let i = 0; i < array.length; i++) {
        let num = array[i]
        let num0 = num - 1
        if (bs.get(num0)) {
            console.log(`${num}  `)
        }
        else {
            bs.set(num0)
        }
    }
}

array = [1, 5, 1, 10, 12, 10]
checkDuplicate(array)