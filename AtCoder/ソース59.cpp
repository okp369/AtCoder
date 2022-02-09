#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
    int n;
    ll k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n+1);
    a[0] = pair<ll, ll>(0, 0);
    for(int i = 1;i <= n;i++)
    {
        ll aa, bb;
        cin >> aa >> bb;
        a[i] = pair<ll, ll>(aa, bb);
    }

    sort(a.begin(), a.end());

    ll ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ll sa = a[i].first - a[i - 1].first;
        if (k - sa < 0)
        {
            k = a[i].first + (k - sa);
            break;
        }
        else
        {
            k = k - sa + a[i].second;
        }

        if (i == n) k = a[i].first + k;
    }
    cout << k << endl;
}