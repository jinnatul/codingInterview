const drawLine = (screen, width, x1, x2, y) =>
{
    let byte, pixel

    const findByte = (x, y, width) =>
    {
        let start = y * width / 8
        return start + Math.floor(x/8)
    }

    const findPixel = x =>
    {
        return x % 8
    }

    for(let i = x1; i <= x2; i++)
    {
        byte = findByte(i, y, width)
        pixel = findPixel(i)
        screen[byte][pixel] = 1
    }
    return screen
}

/* Test output */

let testScreen = [[0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0], 
              [0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0], 
              [0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0], 
              [0,0,0,0,0,0,0,0], [0,0,0,0,0,0,0,0]];

console.log(drawLine(testScreen, 16, 4, 12, 1))

/*
[
    [
      0, 0, 0, 0,
      0, 0, 0, 0
    ],
    [
      0, 0, 0, 0,
      0, 0, 0, 0
    ],
    [
      0, 0, 0, 0,
      1, 1, 1, 1
    ],
    [
      1, 1, 1, 1,
      1, 0, 0, 0
    ],
    [
      0, 0, 0, 0,
      0, 0, 0, 0
    ],
    [
      0, 0, 0, 0,
      0, 0, 0, 0
    ],
    [
      0, 0, 0, 0,
      0, 0, 0, 0
    ],
    [
      0, 0, 0, 0,
      0, 0, 0, 0
    ]
  ]
*/