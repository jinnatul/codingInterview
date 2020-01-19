const URLify = givenString => 
{
    return givenString.trim().replace(/\s/g, '%20')
}

console.log(URLify('Mr 30hn Smith')) //Mr%2030hn%20Smith
