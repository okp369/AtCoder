#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <numeric>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
    
    ll x, y, MAX;
    cin >> x >> y;
    MAX = y - x; // 5
    ll ans = 0;
    ll cnt = 0;
    ll wholecnt = 1;
    bool ok = false;

    for (ll i = MAX; i > 0; --i) { // 5 4 3 2 1
        cnt = 0; // カウントリセット

        while (true) {
            ll a = x + cnt;
            ll b = a + i;
            if (gcd(a, b) == 1) {
                ans = b - a;
                ok = true;
                break;
            }
            ++cnt;
            if (cnt == wholecnt) {
                break;
            }
        }
        
        if (ok) break;

        ++wholecnt;
    }

    cout << ans << endl;
}