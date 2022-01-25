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
    int goal, border, bp, sp;
    cin >> goal >> border >> bp >> sp;
   
    int ans = 0;
    for (int i = 1; i <= goal; i++)
    {
        if (i <= 3)
        {
            ans += bp;
        }
        else {
            ans += sp;
        }
    }
    cout << ans << endl;
}