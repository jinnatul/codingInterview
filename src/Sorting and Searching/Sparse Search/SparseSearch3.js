const search = (array, string) => {
    let length = array.length
    let flag = 0
    for (let i in array) {
        if (array[i].includes(string)) {
            flag = 1
            console.log(`Found at location ${i}`)
        }
    }
    if (flag === 0) {
        console.log(`Not found`)
    }
}

const array = ["for", "", "", "", "geeks", "ide", "",  
    "practice", "", "", "quiz", "", ""]  

const string = "geeks"
search(array, string)