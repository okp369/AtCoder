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
//int n, k, o = 0;
//vector<int> a;
//
//int main() {
//    cin >> n >> k;
//    a.resize(n);
//
//    vector<pair<int, int>> s;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//        if (i < k)
//            s.push_back({ a[i],i });
//    }
//    sort(s.begin(), s.end());
//
//    o = 1e9;
//    for (auto [a1, v1] : s)
//        for (; k < n; k++)
//            if (a1 < a[k])
//            {
//                o = min(o, k - v1);
//                break;
//            }
//    if (o == 1e9)
//        o = -1;
//
//    cout << o;
//}