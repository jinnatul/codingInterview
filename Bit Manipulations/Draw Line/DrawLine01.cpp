#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

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

int main() {

    DrawLine();

}
