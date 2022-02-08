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
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> ans(n);
    rep(i, n) ans[i] = k / n;

    vector<pair<int, int>> p(n);
    rep(i, n) p[i] = pair<int, int>(a[i], i); // 0:”Ô†@1:ƒKƒ`‚Ì‡”Ô

    sort(p.begin(), p.end()); 

    rep(i, k % n) ans[p[i].second]++;

    rep(i, n) cout << ans[i] << endl;
}