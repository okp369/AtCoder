#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

ll cal(ll num) {
    ll digit = 0;
    while (num != 0) {
        num /= 10;
        digit++;
    }
    return digit;
}

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
    ll n;
    cin >> n;

    ll aa = cal(4777);
    
    ll x = 1;
    ll sum = 0;
    ll keta = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (keta == cal(i)) {
            sum += x;
        }
        else 
        {
            keta = cal(i);
            x = 1;
            sum += x;
        }
        ++x;
    }

    cout << sum% 998244353 << endl;
}