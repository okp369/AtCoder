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
    map<int, bool> m;
    for (int i = 0; i <= 360; i++)
    {
        m[i] = false;
    }
    m[0] = true;
    m[360] = true;
    int now = 0;

    int n;
    cin >> n;
    vector<int> a(n);   
    rep(i, n)
    {
        int x;
        cin >> x;
        
        now += x;
        if (now >= 360) now -= 360;
        m[now] = true;
    }

    int max = 0;
    int kakudo = 0;
    //int ima = 0;
    for (pair<int, bool> p: m)
    {
        if (p.second) {            
            if (p.first - kakudo > max)
            {
                max = p.first - kakudo;
            }
            kakudo = p.first;
        }
    }

    cout << max << endl;
}