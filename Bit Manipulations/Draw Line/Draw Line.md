## Question: A monochrome screen is stored as a single array of bytes, allowing eight consecutive pixels to be stored in one byte. The screen has width w, where w is divisible by 8(that is , not byte will split across rows). The height of the screen, of course, can be derived from the length of the array and the width. Implement a function that draws a horizontal line from (x1, y) to (x2, y). The method signature should look something like: `drawline(byte[] screen, int width, int x1, int x2, int y)`

We can solve this problem in JavaScript and C++. 
[Solution in JavaScript](/Bit%20Manipulations/Draw%20Line/DrawLine.js)

**Explanation**

Monochrome image means an image which is composed of one color. A photo or picture developed or executed in black and white or in varying tones of only one color. <br>

To solve this problem we make a function that takes three parameters as follow `screen`, `width`, `x1`, `x2`, `y`. Lets take two variable named `byte` and `pixel`. <br>

We take a for loop (` for (var i = x1; i <= x2; i++)`) which starts from `x1` and iterate upto `x2`. Now lets make a function named `FindByte` and pass i, y and width as parameter. In the function we calcualte the width of the screen and return it. <br>

We make another function named as `FindPixel` which takes i as parameter and return remainder of i divided by 8. <br>
Lets store them in our predefined variable `byte` and `pixel`. Set them `screen` array and set the array value to 1. Lastly return the array. 

### Complexity
**Runtime Complexity**: O(n)