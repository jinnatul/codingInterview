## Question: Implement an algorithm to determine if a string has all unique characters. 
- [Solution in C++](/Array%20and%20Strings/Array/IsUnique/isUnique01.cpp)
- [Solution in JavaScript](/Array%20and%20Strings/Array/IsUnique/IsUnique.js)

**Explanation**

We can solve this problem using JavaScript and C++. We make a function called `isUnique` which has one parameter named `givenString` to take the string. In the function we make an empty object named `obj`. Now we will traverse through the entire given string (`givenString`)using `for` loop. <br/> 
For each iteration we store each character in the `ch` variable (`let ch = givenString[i]`) and check if the `obj` object has the character in it. If it exists then return false. If it is not then set the character to `obj` to true. It means if the object `obj` has similar character then return false and if the object `obj` doesn't have the similar character then return true. After the for loop we return true. 

**Function**

```
bool isUnique(string str)
{
    int ln = str.length();

    sort(str.begin(), str.end());

    for (int i = 1; i < ln; ++i) {
        if(str[i] == str[i - 1]) return false;
    }
    return true;
}
```

### Complexity
**Runtime Complexity**: O(n)
<br>

### Another Solution 

- [Solution in JavaScript](https://github.com/zubayerhimel/coding-Interview/blob/array_and_string/Array%20and%20Strings/Array/IsUnique/IsUnique2.js)
- [Solution in C++](/Array%20and%20Strings/Array/IsUnique/isUnique02.cpp)
- [Solution in C++](/Array%20and%20Strings/Array/IsUnique/isUnique03.cpp)

In this solution we use `Set` object to get the result. `Set` is provided by ECMAScript 2015 or so called ES6 version. `Set` stores only the unique values in it. It is a collection of items which are unique. `Set.size` return the default value 0.
<br/>In the algorithm we create a function named isUnique with a single parameter by which we can pass our stirng. Then we create a `Set` and pass the given string to it. `Set(givenString).size` will give us the total number of the nique character of the string and `intpuString.length` will give us the total number of character of the string. If the unique chacter number and the actual string character number is equal then return true. But the number is not same then return false. 
