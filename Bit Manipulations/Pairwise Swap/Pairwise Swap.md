**Contents**

- [Question](#question)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)

## Question

*Write a program to swap odd and even bits in an integer with as few instructions as possible*

## Solution and Explanation in JavaScript

- [View code](/Bit%20Manipulations/Pairwise%20Swap/PairWiseSwap.js)

To solve this problem we make a function `PairWiseSwap` which takes one parameter of given number. Lets convert the number into binary format and store in `binarBits` variable, right shift one bit and store in `oddBits` and left shift one bit and store `evenBits`. Another two variable `isOdd` and set it to true and `answer` to empty string. <br>

Now we make a for loop which starts from 0 and goes upto binary length of the number. Now we check if the bit is odd or not. If odd then we will check if right most bit of `oddBits` is undefined or not. If undefined then store answer followed by 0 `'0' + answer`, else store answer followed by the right most bit. <br>

If the bit is not odd then check if the right most bit of `oddBits` is undefined or not. If undefined then store answer follwoed by 0 else store answer followed by right most bit of `evenBits`. Then change the `isOdd` status to false. Lastly return the answer. 


## Solution and Explanation in CPP

The number 0xAAAAAAAA is a 32 bit number with all even bits set as 1 and all odd bits as 0. 2) Get all odd bits of x by doing bitwise and of x with 0x55555555. The number 0x55555555 is a 32 bit number with all odd bits set as 1 and all even bits as 0.

```
void PairWiseSwap() {
    ll num;
    cin >> num;

    num = ((num & 0xaaaaaaaa) >> 1) | ((num & 0x55555555) << 1);

    cout << num << endl;
}
```

- [CodeHere 1st Way](/Bit%20Manipulations/Pairwise%20Swap/PairWiseSwap01.cpp)
- [CodeHere 2nd Way](/Bit%20Manipulations/Pairwise%20Swap/PairWiseSwap02.cpp)


## Complexity 

**Runtime Complexity**: O(n)
