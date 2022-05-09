//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//typedef long long ll;
//typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
//#define rep(i,n) for (int i = 0; i < (n); ++i)
//
//int main() {
//    int n, k;
//    cin >> n >> k;
//    vector<string> s(n);
//    for (int i = 0; i < n; i++) cin >> s[i];
//    int ans = 0;
//    for (int i = 0; i < (1 << n); i++) {
//        vector<int> sum(26);
//        for (int j = 0; j < n; j++) {
//            if ((i >> j) & 1) {
//                for (int x = 0; x < s[j].size(); x++) sum[s[j][x] - 'a']++;
//            }
//        }
//        int now = 0;
//        for (int j = 0; j < 26; j++) if (sum[j] == k) now++;
//        ans = max(ans, now);
//    }
//    cout << ans << endl;
//}