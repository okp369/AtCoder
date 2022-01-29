#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)
ll n, l, w, newA, oldA, ans;

// habaを埋めるために布が最低何枚必要か
ll nanmai(ll haba, ll w) {
    if (haba % w == 0)
    {
        return haba / w;
    }
    else 
    {
        return haba / w + 1;
    }
}

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
    ans = 0;
    oldA = 0;
    cin >> n >> l >> w;
    
    for (ll i = 0; i < n; i++)
    {
        cin >> newA;
        // 1個目(特例)
        if (i == 0 && newA != 0)
        {
            ans += nanmai(newA, w);
        }

        // 自分以前で布を充てる必要があるとき
        else if (newA - (oldA + w) > 0)
        {
            ans += nanmai(newA - (oldA + w), w);
        }

        // 最後の場合、自分以降の処理をして終わる
        if (i == n - 1 && l - (newA + w) > 0)
        {
            ans += nanmai(l - (newA + w), w);
        }

        // 必要
        oldA = newA;
    }

    cout << ans << endl;
}