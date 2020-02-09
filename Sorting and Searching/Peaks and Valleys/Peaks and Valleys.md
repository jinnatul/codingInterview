**Contents**

- [Question](#question)
  - [Example](#example)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
  - [Another solution in JavaScript](#another-solution-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)


## Question 
*In an array of integers, a "peak" is an element which is greater than or equal to the adjacent integers and a "valley" is an element which is less than or equal to adjacent integers. For example, in the array [5, 8, 6, 2, 3, 4, 6], {8, 6} are peaks and {5, 2} are valleys. Given an array of integers, sort the array into an ilternating sequence of peaks and valleys.*

### Example
``` 
Input: (5, 3, 1, 2, 3)
Output: (5, 1, 3, 2, 3)
```

## Solution and Explanation in JavaScript

[View code](/Sorting%20and%20Searching/Peaks%20and%20Valleys/PeaksAndValleys.js)

Since the problem asks us to sort the array in a particular way, one thing we can try is doing a normal sort and then fixing the array into an alternating sequence of peaks and valleys. <br>

Imagine we were given an unsorted array and then sort it to become the following: 

 ` 0 1 4 7 8 9` 
 
 We now have an ascending list of integers. <br>
 How we can rearrange this into a proper alternating sequence of peaks and valleys? Let's walk through it and try to do that 

 - The 0 is okay
 - The one is in the wrong place. We can swap it with either the 9 or 4. Let's swap it with the 9. ` 1 9 4 7 8 9 `
 - The 4 is okay
 - The 7 is in the wrong place. We can swap it with either 4 or the 8. Let's swap it with the 4. ` 1 0 7 4 8 9`
 - The 9 is in the wrong place. Let's swap it with 8. ` 1 0 7 4 9 8`

Observe that there's nothing special about the array having these values. The relative order of the elements matters, but all sorted arrays will have the same relative order. Therefore, we can take this same approach on any sorted array. <br>
Algorithm goes like this -
1. Sort the array in ascending order.
2. Iterate through the elements, starting from index 1 (not 0) and jumping two elements at a time. 
3. At each element, swap it with the previous element. Since every three elements appear in the order ` small <= medium <= large`, swaping these elements will always put medium as a peak `medium <= small <= large`.

This approach will ensure that the peaks are in the right place indexes 1, 3, 5 and so on. As long as the odd numbered elements (the peaks) are bigger that the adjacent elements, then the even-numbered elements (the valleys) must be smaller than the adjacent elements. 

### Another solution in JavaScript

[View code](PeaksAndVallyes2.js)

## Solution and Explanation in CPP

## Complexity 
**Runtime Complexity**: O(n log n)
