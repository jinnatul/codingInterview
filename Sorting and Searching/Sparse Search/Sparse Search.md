**Contents**

- [Question](#question)
  - [Example](#example)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
  - [Another solution (Linear Search)](#another-solution-linear-search)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)

## Question
*Given a sorted array of strings that is interspresed with empty strings. Write a method to find the location of a given string.*

### Example
```
Input: b a l l , { " a t " ,"","","","ball","", "car","","","dad",""}
Output: 4
```
## Solution and Explanation in JavaScript
[View code](/Sorting%20and%20Searching/Sparse%20Search/SparseSearch.js)

In the solution we need to find the desired string from the array. We can do this using binary search. First of all, we make a function named as binarySearch which takes four parameters `array`, `low`, `high`, `string`. In the function, first we will return `-1` if the lower value is greater than upper value as it is not possible. Then we will find the mid of the inputted array. To find the mid we will sum the `low` and `high` and devide the summation by 2. <br>
In the if statement we will proceed if the middle value of the array `array[mid]` is equal to empty string. Then we initiate `left` variable with `mid-1` and `right` variable with `mid+1`. <br>
Now we will use while loop to iterate the whole array. We will return `-1` if `left` is smaller than `low` and `right` is greater than `high`. If `left` is greater than or equal to `low` and array position of `left` is not equal to empty string then we will update `mid` with `left` and break out the if statement. <br>
If `right` is less than or equal to `high` and array position of `right` is not equal to empty string then we will update `mid` with `right` and break the statement. After that we will decrease `left` by one and increase `right` by one and continue the loop. <br>
Now we return `mid` if the array of `mid` is equal to desired string, return `mid - 1` if the array of `mid` is greater than desired string else we return `mid + `1. <br>
We make another function named as sparseSearch which only calls the binarySearch

### Another solution (Linear Search)
[View code](/Sorting%20and%20Searching/Sparse%20Search/SparseSearch3.js)

This solution is easy as it only uses linear search. In the solution we just iterate the whole array and check if the array index element is equal to the desired string. If match the string then the result is found.

**Time Complexity** of this solution is O(n)


## Solution and Explanation in CPP

## Complexity 
**Runtime Complexity**: O(log n) for best case and O(n) for worst case
