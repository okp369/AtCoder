#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
    int n, q;
    cin >> n >> q;

    map<int, int> mp1; // ŒŸõ—p
    map<int, int> mp2;
    rep(i, n+1) {
        mp1[i] = i;
        mp2[i] = i;
    }
    
    rep(i, q) {
        int val;
        cin >> val;

        if (mp2[val] == n) {
            // val‚ÌˆÊ’u‚ğ-‚P‚·‚é
            mp2[val] -= 1;
            // –À˜f‚©‚¯‚½ˆÊ’u
            int x = mp2[val];

            // –À˜f‚©‚¯‚½ˆÊ’u(x)‚É‰½‚Ì”‚ª‚ ‚é‚©’²‚×‚é
            int higaisha = mp1[x];
            mp2[higaisha] += 1;

            int aa = mp1[x + 1];
            mp1[x + 1] = higaisha;
            mp1[x] = aa;
        }
        else {
            // val‚ÌˆÊ’u‚ğ{‚P‚·‚é
            mp2[val] += 1;
            // –À˜f‚©‚¯‚½ˆÊ’u
            int x = mp2[val];

            // –À˜f‚©‚¯‚½ˆÊ’u(x)‚É‰½‚Ì”‚ª‚ ‚é‚©’²‚×‚é
            int higaisha = mp1[x];
            mp2[higaisha] -= 1;

            int aa = mp1[x - 1];
            mp1[x - 1] = higaisha;
            mp1[x] = aa;

        }
        
    }
    
    for (int i = 1; i <= n; ++i) {
        cout << mp1[i];
    }
}