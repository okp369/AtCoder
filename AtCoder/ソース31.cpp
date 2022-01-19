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
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    int N, M;
    cin >> N;

    map<string, int> s;

    rep(i, N)
    {
        string title;
        cin >> title;
        s[title] += 1;
    }

    cin >> M;
    rep(i, M)
    {
        string title;
        cin >> title;
        s[title] -= 1;        
    }

    int cnt = 0;
    for (pair<string,int> val : s)
    {
        cnt = max(cnt, val.second);
    }

    cout << cnt << endl;
}