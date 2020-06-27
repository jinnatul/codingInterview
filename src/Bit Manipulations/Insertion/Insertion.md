**Contents**

- [Question](#question)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
  - [Another Solution](#another-solution)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)

## Question
*You are given two 32-bit numbers. N and M, and two bit positions, i and j. Write a method to insert M into N such that M starts at bit j and ends at bit i. You can assume that the bits j through i have enough space to fit all of M. That is, if M = 10011, you can assume that there are at least 5 bits between j and i. You would not, for example have j = 3 and i = 2, because M could not fully fit between bit 3 and 2.* 
*Example*
```
Input: N = 10000000000j M = 10011, i = 2, j = 6
Output: N = 10001001100
```
## Solution and Explanation in JavaScript

[View code](/src/Bit%20Manipulations/Insertion/Insertion1.js)

We can solve this problem in JavaScript and C++. To solve this problem we make a function which takes four parameters N, M, i, j. N and M is given as string in binary format, i and j is given in integer format. <br>

First of all, we split the N and M and store them into n and m variable.
```
let n = N.split('');
let m = M.split('');
```
Now we get the length of splitted N and M and store them in `nLength` and `mLength`. <br>

Now we use a for loop which starts from 0 and iterate to `j-i+1`. Now we set the value of ` m[mlength - a]` to ` n[nlength - (i + a)]`. Lastly we join n and return the result. It will give us the result in binary format. 

### Another Solution

[View code](/src/Bit%20Manipulations/Insertion/Insertion.js)

Here is another solution in JavaScript which takes N and M as decimal integer instead of string in binary format. 

## Solution and Explanation in CPP

```
ll Insertion1(ll num1, ll num2, ll i, ll j) {
    //will equal sequence of all 1s
    ll allOne = ~0;

    // 1s before position j, then 0s.
    ll left = allOne << (j + 1);

    // 1s after position i.
    ll right = (1 << i) - 1;

    // All 1s, except for 0s between i and j.
    ll mask = left | right;

    // clear bits j through i then put num2 in there
    ll n_Cleared = num1 & mask; // clear bit j through i
    ll m_Shifted = num2 << i; // move num2 into current position

    return n_Cleared | m_Shifted;
}

```
- [1st Way](/src/Bit%20Manipulations/Insertion/Insertion1.cpp)
- [2nd Way](/src/Bit%20Manipulations/Insertion/Insertion2.cpp)

## Complexity 

**Runtime Coplexity**: O(n) (*For first solution in JavaScript*)