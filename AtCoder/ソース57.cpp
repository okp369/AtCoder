#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

const int MaxA = 400;

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) {
        int xx;
        cin >> xx;
        xx += 200;
        a[i] = xx;
    }
    vector<int> exist(401);
    
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= MaxA; j++) // 0 〜　400 a[i]がとりうる数
        {
            if (exist[j] != 0) // 過去にjという数があった場合、差の2乗をansに足さないといけない
            {
                ans += (a[i] - j) * (a[i] - j) * exist[j];
            }
        }
        ++exist[a[i]];
    }

    cout << ans << endl;
    return 0;
}