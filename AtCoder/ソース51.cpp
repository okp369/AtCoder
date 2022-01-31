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
    string s, copyS;
    cin >> s;

    while (s[s.size() - 1] == 'a') {
        s.erase(s.end() - 1);
    }

    copyS = s;
    reverse(copyS.begin(), copyS.end());

    if (s == copyS)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}