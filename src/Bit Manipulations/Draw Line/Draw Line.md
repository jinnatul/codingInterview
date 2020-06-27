**Contents**

- [Question](#question)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)

## Question
*A monochrome screen is stored as a single array of bytes, allowing eight consecutive pixels to be stored in one byte. The screen has width w, where w is divisible by 8(that is , not byte will split across rows). The height of the screen, of course, can be derived from the length of the array and the width. Implement a function that draws a horizontal line from (x1, y) to (x2, y). The method signature should look something like: `drawline(byte[] screen, int width, int x1, int x2, int y)`*

## Solution and Explanation in JavaScript

- [View code](/src/Bit%20Manipulations/Draw%20Line/DrawLine.js)

Monochrome image means an image which is composed of one color. A photo or picture developed or executed in black and white or in varying tones of only one color. <br>

To solve this problem we make a function that takes three parameters as follow `screen`, `width`, `x1`, `x2`, `y`. Lets take two variable named `byte` and `pixel`. <br>

We take a for loop (` for (var i = x1; i <= x2; i++)`) which starts from `x1` and iterate upto `x2`. Now lets make a function named `FindByte` and pass i, y and width as parameter. In the function we calcualte the width of the screen and return it. <br>

We make another function named as `FindPixel` which takes i as parameter and return remainder of i divided by 8. <br>
Lets store them in our predefined variable `byte` and `pixel`. Set them `screen` array and set the array value to 1. Lastly return the array. 


## Solution and Explanation in CPP

```
ll findByte(ll x, ll y, ll width) {
    ll start = y * width / 8;
    return start + floor(x / 8);
}

ll findPixel(ll x) {
    return x % 8;
}

void DrawLine() {
    ll screen[8][8] = {{0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0},
                       {0,0,0,0,0,0,0,0}, {0,0,0,0,0,0,0,0},
                       };
    ll width, x1, x2, y;
    cin >> width >> x1 >> x2 >> y;

    ll byte, pixel;
    for (ll i = x1; i <= x2; ++i) {
        byte = findByte(i, y, width);
        pixel = findPixel(i);
        screen[byte][pixel] = 1;
    }

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cout << screen[i][j] << " ";
        }
        cout << endl;
    }
}
```

- [CodeHere 1st Way](/src/Bit%20Manipulations/Draw%20Line/DrawLine01.cpp)


## Complexity

**Runtime Complexity**: O(n)
