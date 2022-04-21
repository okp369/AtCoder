#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); ++i)

ll dp[1000001][9];
const ll mod = 998244353;

void add(ll i, ll j) {
    if (j == 0) {
        dp[i][j] = dp[i - 1][j] + dp[i - 1][j + 1];
    } else if (j == 8) {
        dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
    } else {
        dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] + dp[i - 1][j + 1];
    }

    dp[i][j] %= mod;
}

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<ll>> A(N, vector<ll>(2));
        //map<ll, vector<ll>> mp;  ->  mp[a].push_back(i+1);
    //map<string, ll> s; s[title] += 1; for (pair<string,ll> val : s){} cnt = max(cnt, val.second);
    ll n;
    cin >> n;

    rep(i, 9) {
        dp[0][i] = 1;
    }

    for (ll i = 1; i < n; ++i) {
        rep(j, 9) {
            add(i, j);
        }
    }

    ll ans = 0;
    rep(i, 9) {
        ans += dp[n - 1][i];
        ans %= mod;
    }

    cout << ans << endl;
}