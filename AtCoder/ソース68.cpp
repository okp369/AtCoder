#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); ++i)

ll n, x;
vector<vector<ll>> mp;
ll ans = 0;

void saiki(ll index, ll now)
{
    if (index >= n)
    {
        if (now == x)
        {
            ++ans;
        }
        return;
    }

    for (ll val : mp[index])
    {
        if (now * val > x) continue;
        saiki(index + 1, now * val);
    }
}

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);

    cin >> n >> x;
    
    mp.resize(n);

    rep(i, n)
    {
        ll len;
        cin >> len;
        mp[i].resize(len);
        rep(j, len)
        {
            ll val;
            cin >> val;
            mp[i][j] = val;
        }
    }
    
    saiki(0, 1);

    cout << ans << endl;
}