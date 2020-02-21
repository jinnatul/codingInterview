#include<bits/stdc++.h>

using namespace std;

int dp[1000];
int Triple_Step(int num)
{
    if(num < 0) return 0;
    else if(num == 0) return 1;
    else if(dp[num]) return dp[num];
    else return dp[num] = Triple_Step(num - 1) + Triple_Step(num - 2) + Triple_Step(num - 3);
}

int main() {

    int num;
    cin >> num;
    cout << Triple_Step(num) << endl;
}
