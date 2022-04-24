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
    int n, k;
    cin >> n >> k;
    
    vector<int, map<char, int>> arr(n);
    map<char, int> mp;
    rep(i, n) {
        string s;
        cin >> s;
        rep(j, s.size()) {
            mp[s.at(j)] += 1;
        }
        
    }
}
