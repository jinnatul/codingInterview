const URLify = givenString => 
{
    return givenString.replace(/\s/g, '%20')
}

console.log(URLify('Mr 30hn Smith')) //Mr%2030hn%20Smith
console.log(URLify('   hi')) // %20%20%20hi

