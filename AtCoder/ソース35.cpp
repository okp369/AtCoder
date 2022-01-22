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
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i, N)
    {
        cin >> a[i];
    }

    int x = a[0];
    for(int i = 1; i < N; i++)
    {
        if (x > a[i])
        {
            break;
        }
        else {
            x = a[i];
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != x)
        {
            cout << a[i] << " ";
        }
    }
}