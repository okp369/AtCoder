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
    double a, b, c, x;
    cin >> a >> b >> c >> x;
    
    if (a >= x) {
        cout << 1 << endl;
    }
    else if (b < x) {
        cout << 0 << endl;
    }
    else {        
        cout << c / (b - a) << endl;
    }
}