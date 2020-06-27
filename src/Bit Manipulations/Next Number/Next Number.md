**Contents**

- [Question](#question)
- [Solution and Explanation in JavaScript](#solution-and-explanation-in-javascript)
- [Solution and Explanation in CPP](#solution-and-explanation-in-cpp)
- [Complexity](#complexity)

## Question
*Give a positive integer, print the next smallest and the next largest number that have the same number of 1 bits in their binary representation*

## Solution and Explanation in JavaScript


## Solution and Explanation in CPP

```
Input:  10 (1010)
Output: 12 (1100)
```

```
void NextNumber() {
    ll num;
    cin >> num;

    ll cnt = num, cnt0 = 0, cnt1 = 0;
    while (((cnt & 1) == 0) && (cnt != 0)) {
        cnt0 ++;
        cnt >>= 1;
    }

    while ((cnt & 1) == 1) {
        cnt1 ++;
        cnt >>= 1;
    }

    ll pos = cnt0 + cnt1; // Position of rightmost non-trailing Zero
    if (pos >= 31 || pos <= 0) {
        cout << -1 << endl;
        return;
    }

    num |= (1 << pos); // Flip rightmost non-trailing zero
    num &= ~((1 << pos) - 1); // Clear all bits to the right of position
    num |= (1 << (cnt1 - 1)) - 1; // Insert cnt1 - 1 ones on the rights

    cout << num << endl;
}
```

- [CodeHere-> 1st Way](/src/Bit%20Manipulations/Next%20Number/NextNumber01.cpp)

## Complexity

**Time Complexity**: O(n) <br>
**Space Compelxity**: O(1)
