#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

#define sc1(a) scanf("%lld",&a)
#define sc2(a,b) scanf("%lld %lld",&a,&b)

#define foR0(num) for(ll i = 0; i < num; i++)

#define size1 505

#define mem(name, value) memset(name, value, sizeof(name))

ll total, dp[size1];

ll call (ll amount, ll coins[], ll total) {
    mem(dp, 0);
    dp[0] = 1;

    for (ll i = 0; i < total; ++i) {
        ll eaChoin = coins[i];
        for (ll j = eaChoin; j <= amount; ++j) {
            ll extCoin = j - eaChoin;
            dp[j] += dp[extCoin];
        }
    }

    return dp[amount];
}

int main() {

    ll n, m, num, tc, t = 1;

    sc2(m, num);

    ll coins[num];
    foR0(num) sc1(coins[i]);

    cout << call(m, coins, num) << endl;

}
