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
//int main() {
//    ll n, m;
//    cin >> n >> m;
//    vector<string> s(n);
//    vector<string> t(m);
//    map<string, char> mp;
//
//    for (ll i = 0; i < n; i++)
//    {
//        cin >> s[i];
//        mp[s[i]];
//    }
//
//    for (ll i = 0; i < m; i++)
//    {
//        cin >> t[i];
//        auto a = mp.find(t[i]);
//        auto b = mp.end();
//        if (mp.find(t[i]) != mp.end())
//        {
//            mp[t[i]] = 1;
//        }
//    }
//
//    for (ll i = 0; i < n; i++)
//    {
//        if (mp[s[i]] == 1)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }
//
//    return 0;
//}