## Question: Explain what the following code does
```
((n & (n - 1)) == 0)
```
[Code in JavaScript](/Bit%20Manipulations/Debugger/Debugger.js)

**Explanation**

`((n & (n - 1)) == 0)` this equation figues out if `n` is either 0 or an exact power of `2`. <br>
It works because a binary power of two is of the form `1000...000` and subtracting one will give us `111...111`. Then, when we do **AND** operation those together, we get zero, such as with :
```
  1000 0000 0000 0000
&  111 1111 1111 1111
  ==== ==== ==== ====
= 0000 0000 0000 0000
```
Any non-power-of-two input value (other than zero) will not give you zero when you perform that operation. For example, let's try all the 4-bit combinations -
```
     <----- binary ---->
 n      n    n-1   n&(n-1)
--   ----   ----   -------
 0   0000   0111    0000 *
 1   0001   0000    0000 *
 2   0010   0001    0000 *
 3   0011   0010    0010
 4   0100   0011    0000 *
 5   0101   0100    0100
 6   0110   0101    0100
 7   0111   0110    0110
 8   1000   0111    0000 *
 9   1001   1000    1000
10   1010   1001    1000
11   1011   1010    1010
12   1100   1011    1000
13   1101   1100    1100
14   1110   1101    1100
15   1111   1110    1110
```
If we print all number from `0 - 100` through the function that we made in the [.js file]([Code in JavaScript](/Bit%20Manipulations/Debugger/Debugger.js)) then we can see only 0 and the power of 2 return true and the rest return false. <br>
From 0 - 100 the function return true to these values <br>
` 0 , 1, 2, 4, 8, 16, 32, 64` <br>
These all are the 0 and the exact power of 2. 

### Complexity
**Runtime Complexity** : The worst time complexity is O(log n) when every bit is set. 
