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
    int n, m;
    cin >> n >> m;
    vector<string> stations(n);
    map<string, bool> a;
    rep(i, n)
    {
        string str;
        cin >> str;
        stations[i] = str;
        a[str] = false;
    }
    rep(i, m)
    {
        string str;
        cin >> str;
        a[str] = true;
    }

    rep(i, n)
    {
        if (a[stations[i]]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}