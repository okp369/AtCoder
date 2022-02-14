#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

ll n;
map<ll, ll> mp;
ll mod = 998244353;
ll mod_cnt = 0;

void devide(ll val)
{
    if (val >= mod) 
    {
        val /= mod;
    }
    ll a = val / 2;
    ll b;
    if (val % 2 == 0) b = a;
    else b = a + 1;

    if (a <= 4) mp[a]++;
    else devide(a);
    
    if (b <= 4) mp[b]++;
    else devide(b);
}

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
    
    cin >> n;
    
    if (n > 4)
    {
        devide(n);

        ll ans = 1;
        for (pair<ll, ll> val : mp)
        {
            ans *= pow(val.first, val.second);
        }
        cout << ans % mod << endl;
    }
    else
    {
        cout << n % mod << endl;
    }
    return 0;
}