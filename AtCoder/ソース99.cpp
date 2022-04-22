#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
#define rep(i,n) for (int i = 0; i < (n); ++i)

using namespace std;
using ll = long long;
using ull = unsigned long long;

int N, K;
bool dp[105][11000];
int main() {
    cin >> N;
    vector<int> p(N);
    rep(i, N) cin >> p.at(i);

    rep(i, N + 1) { dp[i][0] = true; }

    rep(i, N) {
        rep(j, 10000) {
            if (dp[i][j]) {  // ”z‚éDP
                dp[i + 1][j] = true;
                dp[i + 1][j + p[i]] = true;
            }
        }
    }

    int ans = 0;
    rep(j, 10000) {
        if (dp[N][j]) ans++;
    }
    cout << ans << endl;
    return 0;
}