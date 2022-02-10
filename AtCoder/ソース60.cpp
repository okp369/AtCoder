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
    cin >> n;
    vector<int> x(n);

    double sum = 0;
    rep(i, n)
    {
        int xx;
        cin >> xx;
        sum += xx;
        x[i] = xx;
    }

    double ave = sum / n;

    int small = ave;
    int big = ave + 1;

    
    if (ave - small > big - ave)ave = big;
    else ave = small;

    int ans = 0;
    rep(i, n)
    {
        ans += (x[i] - ave) * (x[i] - ave);
    }

    cout << ans << endl;
}