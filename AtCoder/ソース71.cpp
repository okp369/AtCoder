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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll ac = abs(a - c);
    ll bd = abs(b - d);

    if (ac == 3 && bd == 3) {
        cout << "Yes" << endl;
    }
    else if (ac == 2 && bd == 4) {
        cout << "Yes" << endl;
    }
    else if (ac == 4 && bd == 2) {
        cout << "Yes" << endl;
    }
    else if (ac == 1 && bd == 1) {
        cout << "Yes" << endl;
    }
    else if (ac == 3 && bd == 3) {

    }
    else {
        cout << "No" << endl;
    }



    
    
}