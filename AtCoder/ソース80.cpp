//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//typedef long long ll;
//#define rep(i,n) for (int i = 0; i < (n); ++i)
//ll n, sum;
//void saiki(ll n, ll i) {
//    if (n == 1) {
//        ++sum;
//        return;
//    }
//
//    if (i != 1) saiki(n - 1, i - 1);
//    if (i != 9) saiki(n - 1, i + 1);
//    saiki(n - 1, i);
//    
//}
//
//
//int main() {
//    //sort(a.begin(), a.end());
//    //vector<vector<int>> A(N, vector<int>(2));
//        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
//    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
//    
//    cin >> n;
//    
//    for (ll i = 1; i < 10; ++i) {
//        saiki(n, i);
//    }
//
//    cout << sum % 998244353 << endl;
//}