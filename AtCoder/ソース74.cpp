#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); ++i)

int n, x;
vector<pair<int, int>> vec;
int ans = 0;

void saiki(int index, int now)
{
    if (index >= n)
    {
        if (now == x)
        {
            ++ans;
        }
        return;
    }

    for (int i = 0; i < 2; ++i) // i = 0, 1
    {        
        if (i == 0)
        {
            saiki(index + 1, now + vec[index].first);
        }
        else if (i == 1)
        {
            saiki(index + 1, now + vec[index].second);
        }
    }
}

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);

    cin >> n >> x;

    vec.resize(n);

    rep(i, n)
    {
        int a, b;
        cin >> a >> b;
        vec[i] = pair<int, int>(a, b);
    }

    saiki(0, 0);

    if (ans == 0) {
        cout << "No" << endl;
    }
    else {
        cout << "Yes" << endl;
    }    
}