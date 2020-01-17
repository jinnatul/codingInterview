# Big-O Notation
Big O notation is used to classify algorithms according to how their running time or space requriements grow as the input size grows. Big O notation is a fuzzy word. Because we can't actually pinpoint the complexity of an algorithm rather we assume a complexity. There are two types of complexity - 

- Time Complexity
- Space Complexity 

## Space Complexity
**Space complexity** is a measure of the amount of working storage an algorithm needs. That means how much memory, in the worst case, is needed at any point in the algorithm. As with the time complexity, we're mostly concerned with how the space needs to grow, in Big-Oh terms as the size of N (input) grows.

## Time Complexity 
**Time complexity** means how an algorithm acts or how much an algorithm takes time in proportion to the input element grows. In porgramming language, its a computational complexity that describes the amount of time it takes to run an algorithm. 

## The Most Common Run Time Complexity
- O(1) Constant Run Time 
- O(n) Linear Run Time 
- O(n^2) Quadratic Run Time 
- O(log n) Logarithmic Run Time
- O(n log n) Linearithmic Run Time 
- O(2^n) Exponential Run Time 
- O(n!) Factorial Run Time

### 1. O(1) Constant Runtime Complexity
Constant runtime complexity means the algorithm run the same time or takes the same time no matter what the input data set is. The runtime is always constant whatever the size of the give input.
```
function returnFirstElement( elements ){
	return ( elements[0])
 }
 ```

 ### 2. O(n) Linear Runtime Complexity
 Linear runtime complexity occurs when the runtime grows in proportion to the given input elements. `n` is the size of input element and `O` represents the complexity based on the number of `n`. A good example of this is searching for a particular value in a dataset using an iteration like in the example below.
 ```
 function constainsValue(elements, value) {
  for (let element in elements) {
    if (element === value) return true;
  }
  return false
}
```
We see that the time taken to loop through all elements in the array grows with an increasing in the size of the array. But what if the element is found before the whole array is traversed? Does the runtime complexity change? Well, that's a no. Because Big O notation consideres the worst case scenario. In this instance, its the case where the loop run through al the elements of the array. 

### 3. O(n^2) Quadratic Runtime Complexity

O(n^2) refers an algorithm whose runtime is proportional to the square of the size of the input elements or data set. Nested loop is one of the example of this type of complexity. 
```
function constainsDuplicate(elements) {
  for (let element in elements) {
     for (let item in elements){
       if (element === item) return true;
     }
  }
  return false
}
```
In this code snippet there are two loops. It will differ as the loop increases, such as for the three loops it will be O(n^3). But as we said earlier Big O notation is a fuzzy word so whatever the loops are, the actual complexity will be O(n^2).

### 4. O(log n) Logarithmic Runtime Complexity
The runtime of O(log n) (log base 2) for the algorithm to run will plateau no matter what the size of the input data set. O(log n )  basically means time goes up linearly while `n` goes up exponentially. So if it takes `1` second to compute `10` elements, it will take `2` seconds to compute `100` elements and `3` seconds to compute `1000` elements and so on. Here is an example 
```
for(let i = 1; i <= n; i = i * 3)
    console.log('Hello')
```
Above code demonstrates an algorithm that runs log_2(n). The post operation of the for loop multiplies the current value of `i` by 3. So, `i` goes from 1 to 3 to 9 to 27.

### 5. O(n log n) Linearithmic Runtime Complexity


> Reference
- [Dev.to Blog](https://https://dev.to/sarah_chima/the-big-o-notation-an-introduction-34f7)

- [stackoverflow](https://https://stackoverflow.com/questions/2307283/what-does-olog-n-mean-exactly)
