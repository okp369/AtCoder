//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//typedef long long ll;
//#define rep(i,n) for (int i = 0; i < (n); ++i)
//
//int n;
//int dp[9][1000005]; // [y][x]
//const int MOD = 998244353;
//
//void add(int& a, int b) {
//    a += b;
//    a %= MOD;
//}
//
//int main() {
//    //sort(a.begin(), a.end());
//    //vector<vector<int>> A(N, vector<int>(2));
//        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
//    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
//    
//    cin >> n;
//
//    // x = 1 ‚Ìê‡‚Ì‚İ‰Šú‰»
//    for (int i = 0; i < 9; ++i) {
//        dp[i][0] = 1;
//    }
//
//    for (int x = 1; x < n; ++x) { // x@1Œ…–Ú`nŒ…–Ú
//        for (int y = 0; y < 9; ++y) { // y@0`8
//            if (y != 0) add(dp[y][x], dp[y - 1][x - 1]);
//            add(dp[y][x], dp[y][x - 1]);
//            if (y != 8) add(dp[y][x], dp[y + 1][x - 1]);    
//        }
//    }
//
//    int ans = 0;
//    for (int i = 0; i < 9; ++i) {
//        add(ans, dp[i][n - 1]);
//    }
//
//    cout << ans << endl;
//}