#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
    //map<int, vector<int>> mp;  //mp[a].push_back(i+1);
    int n, q;
    cin >> n >> q;
    map<int, vector<int>> mp;
    rep(i, n)
    {
        int a;
        cin >> a;
        mp[a].push_back(i+1);
    }

    rep(qi, q)
    {
        int x, k;
        cin >> x >> k;
        if (mp[x].size() < k)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mp[x][k - 1] << endl;
        }
        /*vector<int>& p = mp[x];
        if (p.size() < k) cout << -1 << endl;
        else cout << p[k - 1] << endl;*/
    }
}