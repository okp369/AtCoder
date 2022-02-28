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
    
    vector<int> vec(10);
    rep(i, 10)
    {
        int x;
        cin >> x;
        vec[i] = x;

    }

    cout << vec[vec[vec[0]]] << endl;
}