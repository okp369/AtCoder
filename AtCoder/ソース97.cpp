#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int n, m, k;
int dp[51][2501]; // [x][y]
const int MOD = 998244353;

int add(int x, int y) {
    int sum = 0;
    int cnt = 0;
    for (int i = y-1; i >= 0; i--)
    {
        sum += dp[x - 1][i];
        sum %= MOD;
        ++cnt;
        if (cnt == m) break;
    }

    return sum;
}

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);

    cin >> n >> m >> k;
    dp[n][k];

    // x = 0(1Œ…–Ú) ‚Ì‚Ý–„‚ß‚é
    for (int y = 0; y < m; ++y) {
        dp[0][y] = 1;
    }

    for (int x = 1; x < n; ++x) { // x@2Œ…–Ú`nŒ…–Ú
        for (int y = 0; y < k; ++y) { // y@0`k
            dp[x][y] = add(x, y);
        }
    }

   int ans = 0;
   for (int y = 0; y < k; ++y) {
       ans += dp[n - 1][y];
       ans %= MOD;
   }

   cout << ans << endl;
}



//if (y != 0) add(dp[y][x], dp[y - 1][x - 1]);
//add(dp[y][x], dp[y][x - 1]);
//if (y != 8) add(dp[y][x], dp[y + 1][x - 1]);